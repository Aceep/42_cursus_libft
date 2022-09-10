NAME = libft.a

SRCS = ft_strlen.c \
       ft_strdup.c \
       ft_memset.c \
       ft_strcmp.c \
       ft_bzero.c \
       ft_memcpy.c \
       ft_tolower.c \
       ft_isascii.c \
       ft_isdigit.c \
       ft_isalpha.c \
       ft_atoi.c \
       ft_strlcpy.c \
       ft_strstr.c \
       ft_strlcat.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_isspace.c \
       ft_memccpy.c \
       ft_memcmp.c \
       ft_memmove.c \
       ft_putwchar.c \
       ft_putnbr_fd.c \
       ft_memchr.c \
       ft_calloc.c \
       ft_strnstr.c \
       ft_memalloc.c \
       ft_substr.c \
       ft_strjoin.c \
       ft_strncmp.c \
       ft_strtrim.c \
       ft_putchar_fd.c \
       ft_putstr_fd.c \
       ft_putendl_fd.c \
       ft_putchar.c \
       ft_isalnum.c \
       ft_toupper.c \
       ft_isprint.c \
       ft_touppercase.c \
       ft_tolowercase.c \
       ft_putstr.c \
       ft_putnbr.c \

OBJS = $(SRCS:.c=.o)

HEADER = libft.h \

GCC = gcc -Wall -Wextra -Werror

RM = rm -rf

$(NAME) : $(OBJS)
	$(GCC) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)

all : $(NAME)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

so :
	$(GCC) -nostartfiles -fPIC $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)
