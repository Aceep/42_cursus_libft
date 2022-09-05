#include "libft.h"
#include <ctype.h>
#include <stdio.h>

void	test_redirection(char *str);

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	(void) ac;
	ft_putstr("\033[34;01mBonjour\033[00m\n");
	while (av[i])
	{
		test_redirection(av[i]);
		i ++;
	}
	return (0);
}				
