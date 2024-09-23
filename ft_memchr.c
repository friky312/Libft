#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	chr;
	const unsigned char *ptr;

	ptr = str;
	chr = (unsigned char)c;
	while (n--)
	{
		if (*ptr == chr)
		{
			return ((void *)ptr);
		}
		ptr++;
	}
	return (NULL);
}

int	main(void)
{
	const char	*str = "aiaiai";
	char	c = 'i';
	size_t	n = 6;
	void	*ptr = ft_memchr(str, c, n);

	if (ptr != NULL) //se puede cambiar NULL por (void *)'\0' [o simplemente 0]
	{
		printf("%c %ld\n", c, (char *)ptr -str);
	}
	else
	{
		printf("%c\n", c);
	}
	return (0);
}
