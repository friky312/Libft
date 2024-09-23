#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	while (src[src_len])
		src_len++;
	while (src[i] && dst_len + i +1 < size)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len < size)
	{
		dst[dst_len + i] = '\0';
	}
	return (dst_len + src_len);
}

int	main(void)
{
	const char	*src = " aim yor litel baterflai";
	char	dst[100] = "ai ai ai";
	size_t	result = ft_strlcat(dst, src, sizeof(dst));

	printf("%zu\n", result);
	printf("%s\n", dst);
	return (0);
}
