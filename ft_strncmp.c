#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned int	diff;

	i = 0;
	diff = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (diff == 0) && (i < n))
	{
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if ((diff == 0) && (i < n))
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (diff);
}

int	main(void)
{
	char			*s1;
	char			*s2;
	int	n;
	int res;
    
	s1 = "abimawe";
	s2 = "abimagüe";
	n = 7;
    res = ft_strncmp(s1, s2, n);
    if (res < 0)
    {   
        printf("%s<%s\n", s1, s2);
    }
    else if (res == 0)
    {
        printf("%s=%s\n", s1, s2);
    }
    else
    {
        printf("%s>%s\n", s1, s2);
    }
}
