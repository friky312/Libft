#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*p;
	unsigned char	v;
	size_t			i;

	p = ptr;
	v = value;
	i = 0;
	while (i < len)
	{
		p[i] = v;
		i++;
	}
	return (ptr);
}

int main(void) 
{
    char buffer[20];

	ft_memset(buffer, 'A', 10);
    printf("Buffer: %s\n", buffer);
    return 0;
}
