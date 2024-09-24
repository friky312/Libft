#include "libft.h"

char	ft_putstr(unsigned int i, char s)
{
	 /* aquí se puede meter if (s >= 'a' && s <= 'z') para poner en mayúsculas las pares (metiendo el siguiente if y el return)
	(el resultado es exactamente el mismo)*/
	if (i % 2 == 0) //para convertir en mayúsculas las impares se cambia 0 por 1
		return (s - 32);
	else
		return (s);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*res;
	int		i;

	len = 0;
	while (s[len] != '\0')
		len++;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

int	main(void)
{
	char	*str = "miramealosojos";

	printf("%s", ft_strmapi(str, &ft_putstr));
	return (0);
}

//Otra manera de hacerlo
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = ft_strdup(s);
	if (!s || !f || !str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}

char	ft_mayusminus(unsigned int i, char s)
{
	if (i % 2 == 0)
		return (ft_toupper(s));
	else
		return (ft_tolower(s));
}

int	main(void)
{
    char	str[] = "Hola, Mundo!";
	char	*result = ft_strmapi(str, ft_mayusminus);

	if (result != NULL)
	{
		printf("Original: %s\n", str);
		printf("Modificado: %s\n", result);
		free(result);
	}
	else
	{
		printf("Error: No se pudo asignar memoria.\n");
	}
	return (0);
}
