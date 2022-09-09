#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (!s || !(dst = (char *)malloc(sizeof(char)*(len + 1))))
		return (NULL);
	while (i < len && start < ft_strlen(s))
	{
		dst[i] = s[start];
		i ++;
		start ++;
	}
	dst[i] = '\0';
	return (dst);
}
