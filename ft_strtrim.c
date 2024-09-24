#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, s1 + start, len + 1);
	str[len] = '\0';
	return (str);
}

int	main(void)
{ // los char * se pueden evitar poniendo las cadenas directamente en los pritnf en lugar de los nombres de los char
	char	*s1 = "elbatmanjoker"; // esta es la cadena que se presenta
	char	*s2 = "serobincomen";
	char	*set1 = "eljoker"; // y estos son todos los caracteres que se quitan de la cadena
	char	*set2 = "secomen";

	printf("%s\n", ft_strtrim(s1, set1));
	printf("%s\n", ft_strtrim(s2, set2));
	return (0);
} // es decir, este main devuelve batman robin (separado por una nueva linea)

int	main(void) // versión corta del main, mismo resultado
{
	printf("%s\n", ft_strtrim("elbatmanjoker", "eljoker"));
	printf("%s\n", ft_strtrim("serobincomen", "secomen"));
	return (0);
} 
