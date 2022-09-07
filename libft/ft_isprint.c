#include "libft.h"
#include <ctype.h>

int	ft_isprint(int c)
{
	if ( c >= 32 && c <= 126)
		return (16384);
	return (0);
}
/*
int	main(void)
{
	ft_putnb(ft_isprint(32));
	write(1, "\n", 1);
	ft_putnb(isprint(32));
	return (0);
}*/
