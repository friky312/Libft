#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p++ = 0;
		n--;
	}
}

int main(void)
{
    char buffer[20];

    strcpy(buffer, "Hello, World!");
    ft_bzero(buffer, 7);
    printf("%s\n", buffer);
    return (0);
}
