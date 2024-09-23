#include "libft.h"

int	ft_isdigit(int dig)
{
	return (dig >= '0' && dig <= '9');
}

int	main(void)
{
	printf("%d\n", ft_isdigit('3'));
	printf("%d\n", ft_isdigit('p'));
	printf("%d\n", ft_isdigit(' '));
	return (0);
}
