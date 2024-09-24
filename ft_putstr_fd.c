#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	len = ft_strlen(s);
	write(fd, s, len);
}

//Otra forma de hacerlo
void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

//Una forma más corta todavía
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

//Ambos main sirven para las tres opciones
int	main(void)
{
	char	s[2];
	int		fd = 0;

	if (read(fd, s, 1) > 0) 
	{
		s[1] = '\0';
		ft_putstr_fd("Ff", 1);
	}
	return (0);
}

//El otro main
int	main(void)
{
	ft_putstr_fd("Ff", 1);
	return (0);
}
