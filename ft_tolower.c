#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (c + ('a' - 'A'));
    }
    else
    {
        return (c);
    }
}

int main(void)
{
    char a = 'D';

    printf("%c\n", a);
    printf("%c\n", ft_tolower(a));
    return (0);
}
