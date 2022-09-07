#include "libft.h"

void    *ft_malloc( size_t nitems, size_t size)
{
    void    *s;

    s = (void *)malloc(size * nitems);
    if (!s)
        return (NULL);
    return (s);
}