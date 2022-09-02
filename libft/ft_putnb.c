#include "libft.h"

void	ft_putnb(unsigned int len)
{
	char	c;

	if (len >= 10)
		ft_putnb(len / 10);
	c = (len % 10) + '0';
	write (1, &c, 1);
}
