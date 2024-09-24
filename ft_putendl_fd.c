#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	len = ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}

// opción 2
void	ft_putendl_fd(char *s, int fd)
{
	const char	nl = '\n';

	write(fd, s, ft_strlen(s));
	write(fd, &nl, 1);
}

//Main fácil, ponemos dos cadenas para comprobar que hace bien el salto de linea
//Después de compilar y ejecutar el ./a.out hay que poner en la terminal (si es necesario) fread (para leer) y fwrite (para escribir[pero dará error])
//Aunque si das al enter te devuelve lo escrito (si el ./a.out te deja en un espacio en blanco)
int  main(void)
{
	ft_putendl_fd("Ff", 1);
	ft_putendl_fd("efsfsfsdbf", 1);
	return (0);
}

//El otro main (ambos funcionan con ambas opciones
int	main(void)
{
	char	s[3];
	int		fd = 0;

	if (read(fd, s, 1) > 0)
	{
		s[2] = '\0';
		ft_putendl_fd("Ff", 1);
		ft_putendl_fd("efsfsfsdbf", 1);
	}
	return (0);
}
