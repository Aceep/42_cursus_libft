#include "libft.h"

char	*ft_strstr(const char *str, const char *tofind)
{
        int     i;

        i = 0;
        if (!str[i] && !tofind[i])
		return ((char *)str);
	while (str[i])
        {
                if (ft_strncmp(&str[i], tofind, ft_strlen(tofind)) == 0)
                	return ((char *)(str + i));
		i ++;
	}
	return (0);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	if (av[1] && av[2])
		ft_putnb(ft_strstr(av[1], av[2]));
	return (0);
}*/
