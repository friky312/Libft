#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
}

int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*temp;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (1);
	lst->content = "Nodo hecho";
	lst->next = NULL;
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (1);
	new->content = "Nodo añadido detrás";
	new->next = NULL;
	ft_lstadd_back(&lst, new);
	printf("Nodo 1: %s\n", (char *)lst->content);
	printf("Nodo 2: %s\n", (char *)lst->next->content);
	while (lst != NULL)
	{
		temp = lst->next;
		free(lst);
		lst = temp;
	}
	return (0);
}

