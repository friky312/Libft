#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	len;

	if (s == NULL)
		return ;
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}

//Otra manera de hacerlo
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

//ambas funciones funcionan con el mismo main
void	ay(unsigned int i, char *str)
{
	printf("index = %d string %s\n", i, str);
}

int	main(void)
{
	char	str[] = "por que la vida es asi";

	printf("original %s\n", str);
	ft_striteri(str, ay);
	printf("modificado %s\n", str);
	return (0);
}
