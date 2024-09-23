#include "libft.h"

int	ft_isalpha(int alph)
{
	return ((alph >= 'A' && alph <= 'Z') || (alph >= 'a' && alph <= 'z'));
}

int	main(void)
{
	printf("%d\n", ft_isalpha('d'));
	printf("%d\n", ft_isalpha('2'));
	printf("%d\n", ft_isalpha('F'));
	printf("%d\n", ft_isalpha(' '));
	return (0);
}
