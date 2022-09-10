#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;

	if (!s1 || !set)
		return (0);
	while (ft_strchr(set, *s1) && *s1)
		s1 ++;
	len_s1 = ft_strlen(s1);
	while (ft_strchr(set, s1[len_s1]) && len_s1)
		len_s1 --;
	return (ft_substr(s1, 0, (len_s1 + 1)));
}
