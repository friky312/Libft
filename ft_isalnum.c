#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	main(void)
{
	printf("%d\n", ft_isalnum('e'));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum(' '));
	return (0);
}
