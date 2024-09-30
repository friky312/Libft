#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		temp = *lst;
		*lst = (*lst)->next;
		del(temp->content);
		free(temp);
	}
}

//Otra forma usando la función anterior
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = (t_list *)malloc(sizeof(t_list));
	if (!node1)
		return (1);
	node1->content = "Node 1";
	node1->next = NULL;
	node2 = (t_list *)malloc(sizeof(t_list));
	if (!node2)
	{
		free(node1);
		return (1);
	}
	node2->content = "Node 2";
	node2->next = NULL;
	node1->next = node2;
	node3 = (t_list *)malloc(sizeof(t_list));
	if (!node3)
	{
		free(node1);
		free(node2);
		return (1);
	}
	node3->content = "Node 3";
	node3->next = NULL;
	node2->next = node3;
	printf("Before clearing:\n");
	printf("Node 1 content: %s\n", (char *)node1->content);
	printf("Node 2 content: %s\n", (char *)node2->content);
	printf("Node 3 content: %s\n", (char *)node3->content);
		void	del(void *content) //Esta parte puede ir fuera del main
	{
		(void)content;
	}
	ft_lstclear(&node1, del);
	if (node1 == NULL)
		printf("List cleared successfully!\n");
	return (0);
}
