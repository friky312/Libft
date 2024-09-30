#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	void	print_content(void *content)
	{
		printf("%s\n", (char *)content);
	}
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
	printf("Applying print_content to each node:\n");
	ft_lstiter(node1, print_content);
	free(node3);
	free(node2);
	free(node1);

	return (0);
}
