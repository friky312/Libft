#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//Después de compilar y ejecutar el ./a.out hay que poner en la terminal (si es necesario) fread (para leer) y fwrite (para escribir[pero dará error])
//Aunque si das al enter te devuelve lo escrito (si el ./a.out te deja en un espacio en blanco)
int	main(void)
{
	ft_putchar_fd('F', 1);
	return (0);
}

//otro main
int	main(void)
{
	char	s[2];
	int		fd = 0;

	if (read(fd, s, 1) > 0)
	{
		s[1] = '\0';
		ft_putchar_fd('R', 1);
	}
	return (0);
}
