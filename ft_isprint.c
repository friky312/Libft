#include "libft.h"

int	ft_isprint(int espchar)
{
	return ((espchar >= 32 && espchar <= 126));
}

int	main(void)
{
	printf("%d\n", ft_isprint('\0'));
	printf("%d\n", ft_isprint('6'));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('j'));
	printf("%d\n", ft_isprint('A'));
	return (0);
}
