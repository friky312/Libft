#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	l;
	int	flag;

	flag = 0;
	l = ft_strlen(str);
	while (l >= 0 && flag == 0)
	{
		if (str[l] == c)
		{
			return ((char *)&str[l]);
			flag = 1;
		}
		l--;
	}
	return (NULL);
}

int main(void)
{
    const char *str = "atun con pan";
    int c = 'a';
    char *ptr = ft_strrchr(str, c);

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
