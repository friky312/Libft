#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

int	main(void)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (1);
	lst->content = "Nodo borrado";
	lst->next = NULL;
	printf("Contenido del nodo antes de eliminar: %s\n", (char *)lst->content);
	void	del(void *content) //Esta parte puede ir fuera del main, en ese caso 
	{
		(void)content;
	}
	ft_lstdelone(lst, del);//esto debería ser (lst, &del)
	return (0);
}
