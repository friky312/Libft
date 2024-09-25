#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!(new))
		return (NULL);
	new->content = (void *)content;
	new->next = NULL;
	return (new);
}

int	main(void)
{
	char	content[50] = "llamame vrga";
	t_list	*res = ft_lstnew((void *)content);
	printf("content %s", (char *)res->content);
	return (0);
}
