#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (c - ('a' - 'A'));
    }
    else
     {
        return (c);
     }
}

int main(void)
{
    char a = 'o';

    printf("%c\n", a);
    printf("%c\n", ft_toupper(a));
    return (0);
}
