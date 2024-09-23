#include "libft.h"

int	ft_memcmp(const void *dst, const void *str, size_t n)
{
	size_t			i;
	unsigned char	*str2;
	unsigned char	*dst2;

	i = 0;
	str2 = (unsigned char *)str;
	dst2 = (unsigned char *)dst;
	while (i < n)
	{
		if (dst2[i] != str2[i])
		{
			return (dst2[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	const char str1[] = "Hello";
	const char str2[] = "Hellp";

	int result = ft_memcmp(str1, str2, 5);

	if (result == 0)
	{
		printf("Lo mismo \n");
	}
	else if (result < 0)
	{
		printf("menor \n");
	}
	else
	{
		printf("mayor \n");
	}

	return 0;
}
