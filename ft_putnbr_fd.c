#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + 48, fd);
}

//opción 2
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

//Son 4 main, están ordenados de más a menos sencillo
int	main(void)
{
	ft_putnbr_fd(42, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-12345, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	return (0);
}

int	main(void)
{
	char	s[3];
	int		fd = 0;

	if (read(fd, s, 1) > 0)
	{
		s[2] = '\0';
		ft_putnbr_fd(24534, 1);
	}
	return (0);
}

int	main(void)
{
	char	s[100];
	int		n;
	int		fd = 0;

	if (read(fd, s, 99) > 0)
	{
		s[99] = '\0';
		n = ft_atoi(s); //Se cambia la s por unas comillas ("") y algo escrito dentro para que devuelva un número (negativo o positivo) o un 0
		ft_putnbr_fd(n, 1);
		write(1, "\n", 1);
	}
	return (0);
}

int	main(void)
{
	char	s[100];
	int		n;
	int		bytes_read;
	int		fd = 0;

	bytes_read = read(fd, s, 99);
	if (bytes_read > 0)
	{
		s[bytes_read] = '\0';
		n = ft_atoi(s); //Se cambia la s por unas comillas ("") y algo escrito dentro para que devuelva un número (negativo o positivo) o un 0
		ft_putnbr_fd(n, 1);
		write(1, "\n", 1);
	}
	else
		write(1, "Error al leer\n", 14);
	return (0);
}
