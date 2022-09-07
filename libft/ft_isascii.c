#include "libft.h"
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{

	ft_putnb(ft_isascii(357));
	ft_putnb(isascii(357));
	return (0);
}
*/
