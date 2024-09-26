#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	int		size;

	//Crear el primer nodo
	node1 = (t_list *)malloc(sizeof(t_list));
	if (!node1)
		return (1);
	node1->content = "Nodo 1";
	node1->next = NULL;
	//Crear el segundo nodo
	node2 = (t_list *)malloc(sizeof(t_list));
	if (!node2)
		return (1);
	node2->content = "Nodo 2";
	node2->next = NULL;
	//Enlazar el primer nodo con el segundo
	node1->next = node2;
	//Crear el tercer nodo
	node3 = (t_list *)malloc(sizeof(t_list));
	if (!node3)
		return (1);
	node3->content = "Nodo 3";
	node3->next = NULL;
	//Enlazar el segundo nodo con el tercero
	node2->next = node3;
	//Llamar a ft_lstsize para contar los nodos
	size = ft_lstsize(node1);
	printf("La lista tiene %d nodos.\n", size);
	//Liberar la memoria asignada
	free(node3);
	free(node2);
	free(node1);
	return (0);
}
