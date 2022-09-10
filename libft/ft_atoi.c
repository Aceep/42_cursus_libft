#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	unsigned long long int	nb;

	nb = 0;
	sign = 1;
	i = ft_isspace(str);
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
	(void)ac;
	if (av[1])
	{
		ft_putnb(atoi(av[1]));
		ft_putchar('\n');
		ft_putnb(ft_atoi(av[1]));
	}
	return (0);
}*/
