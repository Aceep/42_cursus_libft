#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <strings.h>

size_t	ft_strlen(const char *str);
char	*ft_touppercase(char *str);
char	*ft_tolowercase(char *str);
void	ft_putstr(char *str);
void	ft_putnb(unsigned int len);
char	*ft_strdup(const char *str);
void	*ft_memset(void *str, int c, size_t n);
int     ft_strcmp(const char *s1, const char *s2);
void	ft_bzero(void *str, size_t n);
void 	*ft_memcpy(void *dest, const void *src, size_t n);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_isprint(int c);
int	ft_isascii(int c);
int	ft_isalnum(int c);
int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_atoi(const char * c);
char	*ft_strstr(const char *str, const char *tofind);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *str, const char *tofind, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
void	*ft_calloc(size_t nitems, size_t size);
int	ft_isspace(const char *str);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
void    *ft_malloc( size_t nitems, size_t size);

#endif
