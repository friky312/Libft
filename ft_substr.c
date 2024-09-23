#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	length;
	size_t	i;
	char	*str;

	if (!s)
		return (0);
	length = ft_strlen(s);
	if (start >= length)
		return (ft_strdup(""));
	if (length < len + start)
		len = length - start;
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

int	main(void)
{
	const char	str1[] = "batman y robin se quieren";
	char *str2 = ft_substr(str1, 7, 7);

	if (str2 != NULL)
	{
		printf("%s\n", str2);
		free(str2);
	}
	else
	{
		printf("\n");
	}
	return (0);
} // esto devuelve y robin, porque el primer 7 es donde empieza, y el segundo 7 son los caracteres que pilla desde el carácter 7 de la cadena (la longitud de la subcadena extraída)
