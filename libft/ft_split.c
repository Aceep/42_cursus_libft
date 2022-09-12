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
	int	j; //parcours les lignes
	int	i; //parcours la chaine si
	int	end_w;

	nb_line = ft_nb_line(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (nb_line))))
		return (NULL);
	nb_line = 0;
	i = 0;
	end_w = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (!(str[nb_line] = (char *)malloc(sizeof(char) * ((i - end_w) + 1))))
				return (NULL);
			while (s[i] == c && s[i + 1] == c)
                        	i ++;
			while (end_w < i && s[end_w] != c)
			{
				str[nb_line][j] = s[end_w];
				j ++;
			}
			str[nb_line][j] = '\0';
			j = 0;
			end_w = i;
			nb_line ++;
			ft_putstr(str[nb_line]);
		}
		i ++;
	}
	return (str);
}

int	main(void)
{
	char	c = '#';
	char const *s = "Je suis#le###pire test#de tous les####  temps";
       ft_split(s, c);
	return (0);
}	
