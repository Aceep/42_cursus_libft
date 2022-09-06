#include "libft.h"
#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]) 
		i ++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/*int	main(int ac, char **av)
{
	char *dest1 = "HELLO";
	(void)ac;
	ft_putnb(ft_strcmp(dest1, av[1]));
	ft_putnb(strcmp(dest1, av[1]));
	return (0);
}*/
