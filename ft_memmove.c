#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (d == s || len == 0)
		return (dst);
	if (d < s || d >= s + len)
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	else
	{
		d += len;
		s += len;
		while (len-- > 0)
			*(--d) = *(--s);
	}
	return (dst);
}

int main(void)
{
    char src[] = "Hello, World!";
    char dst[20];

    ft_memmove(dst, src, 3);
    printf("%s\n", dst);
    return (0);
}

//otro main
int main()
{
	char dst[] = "destino";

	char *s = ft_memmove(dst + 3, dst, 5); // Mueve 5 caracteres desde el inicio de dst hacia dst + 3
	printf("%s",s);
} 
