#include "libft.h"

void    *ft_memalloc(size_t size)
{
	void    *str;

	str = (void *)malloc(size * sizeof(char));
	if (!str)
		return (NULL);
	while (size--)
		((char *)str)[size] = 0;
	return (str);
}
