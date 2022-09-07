#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	long long int	nb;

	nb = 0;
	sign = 1;
	i = 0; 
	while (str[i] == 32 || str[i] == '\f'
		|| str[i] ==  '\n' 
		|| str[i] == '\r'
		|| str[i] == '\t'
		|| str[i] == '\v')
		i ++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i ++;
	}
	return (sign * nb);
}
/*
int	main(int ac, char **av)
{
	while (ac > 1)
	{
		ft_putnb(ft_atoi(av[ac - 1]));
		write(1, "\n", 1);
		ft_putnb(atoi(av[ac - 1]));

		write(1, "\n", 1);
		ac --;
	}
	return (0);
}
*/
