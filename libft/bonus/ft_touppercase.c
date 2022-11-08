#include "libft.h"

char	*ft_touppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i ++;
	}
	return (str);
}
