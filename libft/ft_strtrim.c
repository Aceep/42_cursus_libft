#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int	i;
	size_t	len_set;
	size_t	rem;

	if (!s1 || !(new = (char *)malloc(sizeof(char)*(ft_strlen(s1) + 1))))
		return (NULL);
	i = 0;
	len_set = ft_strlen(set);
	while (s1[i])
	{
		if (ft_strncmp(&s1[i], set, len_set) == 0)
			while (rem < len_set)

