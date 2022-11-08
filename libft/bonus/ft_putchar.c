#include "libft.h"

void	ft_putchar(wchar_t c)
{
	if ((unsigned int)c > 128)
	{
		char	buff[10];
		int	len;

		len = 0;	
		putwchart(c, &len, buff);
		buff[len] = '\0';
		write(1, buff, ft_strlen(buff));
	}
	else
		write(1, &c, 1);
}
