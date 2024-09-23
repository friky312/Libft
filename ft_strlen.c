#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("%zu\n", ft_strlen(" "));
	printf("%zu\n", ft_strlen("1111"));
	printf("%zu\n", ft_strlen("ave que no vuela a la cazuela"));
	return (0);
}
