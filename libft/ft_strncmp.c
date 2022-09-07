#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

        i = 0;
	if (n == 0)
		return (0);
        while (i < n && (s1[i] || s2[i]))
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
  		      return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i ++;
	}
	return (0);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	if(av[1] && av[2])
		ft_putnb(ft_strncmp(av[1], av[2], 5));
	return (0);
}*/
