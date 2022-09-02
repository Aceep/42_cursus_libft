NAME = libft.a

SRCS = ft_strlen.c \
       ft_strdup.c \
       ft_memset.c \
       ft_strcmp.c \
       ft_bzero.c \
       ft_touppercase.c \
       ft_tolowercase.c \
       ft_putstr.c \
       ft_putnb.c \

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
