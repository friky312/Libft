#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = dst;
	s = src;
	i = 0;
	while (d == s || !n)
	{
		return (dst);
	}
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

int main(void)
{
    char src	[] = "io sono il bambino che contava le stelle";
    char dst[20];

    ft_memcpy(dst, src, 18);
    printf("%s\n", dst);
    return (0);
}
