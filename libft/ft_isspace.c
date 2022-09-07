#include "libft.h"

int	ft_isspace(const char *str)
{		
	int	i;

	i = 0;
	while (str[i] == 32 || str[i] == '\f'
                || str[i] ==  '\n'
                || str[i] == '\r'
                || str[i] == '\t'
                || str[i] == '\v')
                i ++;
	return (i);
}
