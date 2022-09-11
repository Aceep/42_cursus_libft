#include "libft.h"

char	*ft_itoa(int n)
{
	char	*nbr;
	long long int	i;
	size_t	size;

	i = n;
	size = n > 0 ? 0 : 1;
	i = i > 0 ? i : -i;
	while (n)
	{
		n /= 10;
		size ++;
	}
	if (!(nbr = (char *)malloc(sizeof(char) * (size + 1))))
		return (0);
	nbr[size--] = '\0';
	while (i)
	{
		nbr[size --] = (i % 10) + '0';
		i /= 10;
	}
	if (nbr[1] != '\0' && size == 0)
		nbr[0] = '-';
	else if (nbr[1] == '\0' && size == 0)
		nbr[0] = '0';
	return (nbr);
}
