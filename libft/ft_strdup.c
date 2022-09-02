#include "libft.h"

char	*ft_strdup(const char *str)
{
	int	len;
	char	*cpy;
	int	i;

	i = 0;
	len = ft_strlen(str);
	cpy = (char *)malloc((len + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	while (str[i])
	{
		cpy[i] = str[i];
		i ++;
	}
	cpy[i] = '\0';
	return (cpy);
}
