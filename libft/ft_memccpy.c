#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		 if (((char *)dest)[i] == (char)c)
                	return (&((char *)dest)[i + 1]);
		i ++;
	}
	return (NULL);
}
