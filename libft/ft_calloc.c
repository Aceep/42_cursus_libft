#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*tab;

	if (!(tab = (void *)malloc(size * nitems)))
		return (NULL);
	return (ft_bzero(tab, size * nitems), (void *)tab);
}
