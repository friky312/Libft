#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*result;
	size_t		i;
	size_t		j;

	i = 0;
	result = NULL;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' 
			&& haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (j == 0)
				result = &haystack[i];
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)result);
		i++;
	}
	return (NULL);
}

int	main(void)
{
	const char	*haystack = "papana";
	const char	*needle = "namericano";
	size_t	len = 16;
	char	*result = ft_strnstr(haystack, needle, len);

	if (result != NULL)
		printf("%s\n", result);
	else
		printf("noppe\n");
	return (0);
} //esto da noppe
