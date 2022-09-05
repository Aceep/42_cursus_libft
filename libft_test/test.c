#include "libft.h"

void    test_putstr(char *str)
{
        ft_putstr(str);
        ft_putstr(ft_tolowercase(ft_strdup(str)));
        ft_putstr(ft_touppercase(ft_strdup(str)));
}

void	test_strlen(char *str)
{
	ft_putnb(ft_strlen(str));
	write(1, "\n", 1);
	if (strlen(str) == ft_strlen(str))
		ft_putstr("Success of strlen");
	else
		ft_putstr("Fail");
}

void	test_strdup(char *str)
{
	if (ft_strcmp(str, ft_strdup(str)) == 0)
		ft_putstr("Success of strdup");
	else
		ft_putstr("Fail");
	ft_putstr(ft_strdup(str));
}

void	test_memset(char *str)
{
	char	*cpy;

	cpy = ft_strdup(str);
	cpy = memset(cpy, '$', 7);
	str = ft_memset(str, '$', 7);
	if (ft_strcmp(cpy, str) == 0)
		ft_putstr("Success of memset");
	else
		ft_putstr("Fail");
	
	ft_putstr(cpy);
	ft_putstr(str);
}

void	test_bzero(char *str)
{
	char	*cpy;

	cpy = ft_strdup(str);
	ft_putstr(cpy);
	bzero(cpy, ft_strlen(cpy));
	ft_putstr(cpy);
	ft_bzero(str, 4);
	if (ft_strcmp(cpy, str) == 0)
		ft_putstr("Sucess of bzero");
	else
		ft_putstr("Fail");
	ft_putstr(cpy);
	ft_putstr(str);
}

void	test_redirection(char *str)
{
	test_putstr(str);
	test_strlen(str);
	test_strdup(str);
	test_memset(ft_strdup(str));
	test_bzero(ft_strdup(str));
}
