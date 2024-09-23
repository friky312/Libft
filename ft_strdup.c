#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*copy;

	i = 0;
	while (s1[0] != 0 && s1[i] != 0)
		i++;
	len = i;
	if (i != 0)
	{
		copy = (char *)malloc(sizeof(char) * (len +1));
		if (copy == NULL)
			return (NULL);
		ft_memcpy(copy, s1, len);
		copy[len] = '\0';
		return (copy);
	}
	else
	{
		copy = (char *)malloc(1);
		if (copy == NULL)
			return (NULL);
		copy[0] = '\0';
		return (copy);
	}
}

int	main(void)
{
	const char	*a = "miste wowea";
	char	*b = ft_strdup(a);

	printf("%s", b);
	free(b);
	return (0);
}
