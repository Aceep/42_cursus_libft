#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s && fd > 0)
		write(fd, s, ft_strlen(s));
}