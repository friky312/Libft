#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

int	main(void)
{
	char src[] = "Jelouda";
	char dst[100];
	size_t	len = ft_strlcpy(dst, src, sizeof(dst));

	printf("%zu\n", len);
	printf("%s\n", src);
	printf("%s\n", dst);
	return (0);
}
