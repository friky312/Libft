#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstnew;
	t_list	*nod;

	lstnew = 0;
	while (lst)
	{
		nod = ft_lstnew(lst->content);
		if (!nod)
		{
			ft_lstclear(&lstnew, del);
			return (NULL);
		}
		nod->content = f(nod->content);
		ft_lstadd_back(&lstnew, nod);
		lst = lst->next;
	}
	return (lstnew);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*new_list;

	void	*duplicate_content(void *content)
	{
		char	*dup = strdup((char *)content);
		if (!dup)
			return (NULL);
		return (dup);
	}
	void	delete_content(void *content)
	{
		free(content);
	}
	void	print_content(void *content)
	{
		printf("%s\n", (char *)content);
	}
	node1 = ft_lstnew(strdup("Node 1"));
	if (!node1)
		return (1);
	node2 = ft_lstnew(strdup("Node 2"));
	if (!node2)
	{
		ft_lstclear(&node1, delete_content);
		return (1);
	}
	node1->next = node2;
	node3 = ft_lstnew(strdup("Node 3"));
	if (!node3)
	{
		ft_lstclear(&node1, delete_content);
		return (1);
	}
	node2->next = node3;
	new_list = ft_lstmap(node1, duplicate_content, delete_content);
	printf("Original List:\n");
	ft_lstiter(node1, print_content);
	printf("\nNew List (duplicated):\n");
	ft_lstiter(new_list, print_content);
	ft_lstclear(&node1, delete_content);
	ft_lstclear(&new_list, delete_content);
	return (0);
}

//No compila con la flag -Werror
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*new_list;

	void	*duplicate_content(void *content)
	{
		char	*dup = strdup((char *)content);
		if (!dup)
			return (NULL);
		return (dup);
	void	delete_content(void *content)
	{
		free(content);
	}
	void	print_content(void *content)
	{
		printf("%s\n", (char *)content);
	}
	node1 = ft_lstnew(strdup("Node 1"));
	if (!node1)
		return (1);
	node2 = ft_lstnew(strdup("Node 2"));
	if (!node2)
	{
		ft_lstclear(&node1, delete_content);
		return (1);
	}
	node1->next = node2;
	node3 = ft_lstnew(strdup("Node 3"));
	if (!node3)
	{
		ft_lstclear(&node1, delete_content);
		return (1);
	}
	node2->next = node3;
	new_list = ft_lstmap(node1, duplicate_content, delete_content);
	printf("Original List:\n");
	ft_lstiter(node1, print_content);
	printf("\nNew List (duplicated):\n");
	ft_lstiter(new_list, print_content);
	ft_lstclear(&node1, delete_content);
	ft_lstclear(&new_list, delete_content);
	return (0);
}

