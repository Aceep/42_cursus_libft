#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = (unsigned char)c;
		i ++;
	}
	((char *)str)[i] = '\0';
	return (str);
}
