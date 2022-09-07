#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *str, const char *tofind, size_t n)
{
        size_t     i;

	i = 0;
        if (!tofind[i])
		return ((char *)str);
	if (!n)
                return (NULL);
	i = ft_strlen(tofind);
	while (*str && n-- >= i)
        {
                if (ft_strncmp(str, tofind, i) == 0)
                	return ((char *)str);
		str ++;
	}
	return (NULL);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	if (av[1] && av[2])
	{
		ft_putstr(ft_strnstr(av[1], av[2], ft_strlen(av[1])));
	}
	return (0);
}*/
