#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}


int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last_node;

	node1 = (t_list *)malloc(sizeof(t_list));
	if (!node1)
		return (1);
	node1->content = "primer nodo";
	node1->next = NULL;
	// 2º nodo se hace free para evitar fugas de memoria desde la creación del primer nodo
	node2 = (t_list *)malloc(sizeof(t_list));
	if (!node2)
	{
		free(node1);
		return (1);
	}
	node2->content = "Nodo 2";
	node2->next = NULL;
	node1->next = node2;
	// 3º
	node3 = (t_list *)malloc(sizeof(t_list));
	if (!node3)
	{
		free(node1);
		free(node2);
		return (1);
	}
	node3->content = "Nodo 3";
	node3->next = NULL;
	node2->next = node3;
	last_node = ft_lstlast(node1);
	if (last_node)
	{
		printf("El último nodo contiene: %s\n", (char *)last_node->content);
	}
	else
	{
		printf("La lista está vacía.\n");
	}
	free(node3);
	free(node2);
	free(node1);
	return (0);
}
