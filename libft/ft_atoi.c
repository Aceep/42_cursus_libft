#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	long long int	nb;

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