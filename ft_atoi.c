#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	while (*str == ' ' || (*str < 14 && *str >= 9))
		str++;
	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (i > 1)
		sign = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	printf("%i", ft_atoi("--32f45"));
} //da 0 por el doble -, con solo 1 da -32
