#include "libft.h"

int	ft_nbrlen(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n; 
		count ++;
	}
	while (n >= 10)
	{
		n /= 10;
	       	count ++;
	}
	count ++;
	return (count);
}
/*
int	main(void)
{
	int n = 123;
	int count = 0;
	ft_putnbr(ft_nbrlen(n, count));
	return (0);
}*/
