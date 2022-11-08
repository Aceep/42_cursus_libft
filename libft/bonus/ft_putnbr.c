#include "libft.h"

void	ft_putnbr(int len)
{
	char	c;
	
	if (len == -2147483648)
		write(1, "-2147483648", 11);
	if (len < 0)
	{
		len = -len;
		write(1, "-", 1);
	}
	if (len >= 10)
		ft_putnbr(len / 10);
	c = (len % 10) + '0';
	write (1, &c, 1);
}
