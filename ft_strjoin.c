#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}530931
	len = 0;
	while (s2[len] != '\0')
	{
		str[i] = s2[len];
		i++;
		len++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char	s1[] = "batman";
	char	s2[] = "robin";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
} // concatena las dos cadenas, es decir que devuelve batmanrobin
