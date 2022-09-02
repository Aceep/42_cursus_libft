#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

size_t	ft_strlen(const char *str);
char	*ft_touppercase(char *str);
char	*ft_tolowercase(char *str);
void	ft_putstr(char *str);
void	ft_putnb(unsigned int len);
char	*ft_strdup(const char *str);
void	*ft_memset(void *str, int c, size_t n);
int     ft_strcmp(const char *s1, const char *s2);
void	ft_bzero(void *str, size_t n);

#endif
