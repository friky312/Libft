#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

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
