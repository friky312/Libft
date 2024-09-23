#include "libft.h"

int	ft_isascii(int charac)
{
	return (charac >= 0 && charac <= 127);
}

int	main(void)
{
	printf("%d\n", ft_isascii(' '));
	printf("%d\n", ft_isascii('7'));
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('NULL'));
	printf("%d\n", ft_isascii('f'));
	return (0);
}
