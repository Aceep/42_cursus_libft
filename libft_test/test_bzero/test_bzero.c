#include "../test_libft.h"

void	test_bzero()
{
	char	*cpy;
	char	*str;
	char	*n;

	get_next_line("normal", str, n); cpy = ft_strdup(str); bzero(cpy, n); ft_bzero(str, n); check(str, cpy);	
}

void	check(char *cpy, char *str)
{
	if (ft_strcmp(cpy, str) == 0)
		ft_putstr("Sucess of bzero");
	else
		ft_putstr("Fail");
} 