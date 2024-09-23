#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned long	*str;

	str = malloc(count * size);
	if (str == 0)
		return (0);
	ft_bzero(str, count * size);
	return (str);
}

int	main(void)
{
	printf("%ld", sizeof(size_t));
	return (0);
} // devuelve 8
