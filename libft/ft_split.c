#include "libft.h"

int	ft_nb_line(char const *s, char c)
{
	int	i;
	int	nb_line;

	i = 0;
	nb_line = 0;
	while (s[i])
	{
		if ( (s[i] == c && s[i + 1] != c) || s[i + 1] == '\0')
			nb_line ++;
		i ++;
	}
	return (nb_line);
}

char	**ft_split(char const *s, char c)
{
	int	nb_line;
	char	**str;
	int	j; 
	int	i;

	if (!s) 
		return (NULL);
	nb_line = ft_nb_line(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (nb_line + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s ++;
		else 
		{
			j = 0;
			while (*(s + j) != '\0' && *(s + j) != c)
				j ++;
			if ( i < nb_line)
				str[i++] = ft_substr(s, 0, j);
			s += j;
		}
	}
	str[i] = 0;
	return (str);
}
/*
int	main(void)
{
	char	c = '#';
	char const *s = "Je suis#le###pire test#de tous les####  temps";

	ft_split(s, c);
	return (0);
}	*/
