#include "libft.h"

int     ft_strstr(char *str, char *tofind)
{
        int     i;

        i = 0;
	if (!tofind)
		return (0);
        while (str[i])
        {
                if (ft_strncmp(str, tofind, 4) == 0)
                	return (1);
		i ++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	(void)ac;
	if (av[1] && av[2])
		ft_putnb(ft_strstr(av[1], av[2]));
	return (0);
}
