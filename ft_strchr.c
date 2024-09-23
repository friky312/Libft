#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	uc;

	i = 0;
	uc = (unsigned char)c;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == uc)
			return ((char *)&str[i]);
		i++;
	}
	if (uc == '\0')
	{
		return ((char *)&str[i]);
	}
	return (NULL);
}

int main(void)
{
    const char *str = "hiyoo";
    int c = 'o';
    char *ptr = ft_strchr(str, c);

    if (ptr != NULL)
    {
        printf("%c%ld\n", c, ptr - str);
    }
    else
    {
        printf("%c\n", c);
    }
    return (0);
}
