#include "libft.h"
#include <ctype.h>

void	test_redirection(char *str);

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	(void) ac;
	while (av[i])
	{
		test_redirection(av[i]);
		i ++;
	}
	return (0);
}				
