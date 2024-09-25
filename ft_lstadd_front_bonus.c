#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

int main(void)
{
	t_list *lst;
	t_list *new;
	t_list *temp;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (1);
	lst->content = "Nodo hecho";
	lst->next = NULL;
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (1);
	new->content = "Nodo añadido delante";
	new->next = NULL;
	ft_lstadd_front(&lst, new);
	printf("Nodo 1: %s\n", (char *)lst->content);
	printf("Nodo 2: %s\n", (char *)lst->next->content);
	// free(new);
	// free(lst);
	//Para liberar memoria sin que dé cosas raras ↓
	while (lst != NULL)
	{
		temp = lst->next;
		free(lst);
		lst = temp;
	}
	return (0);
}
