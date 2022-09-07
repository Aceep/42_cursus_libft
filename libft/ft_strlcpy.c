#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  ret;
    size_t i;

    ret = ft_strlen(src);
    i = 0;
    while (i < size && src[i])
    {
        dst[i] = src[i];
        i ++;
    }
    dst[i] = '\0';
    return (ret);
}
