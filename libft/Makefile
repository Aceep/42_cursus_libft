NAME = libft.a

SRCS = ft_strlen.c \
       ft_split.c \
       ft_strdup.c \
       ft_memset.c \
       ft_bzero.c \
       ft_memcpy.c \
       ft_tolower.c \
       ft_isascii.c \
       ft_isdigit.c \
       ft_isalpha.c \
       ft_atoi.c \
       ft_strlcpy.c \
       ft_strlcat.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_isblank.c \
       ft_memccpy.c \
       ft_memcmp.c \
       ft_memmove.c \
       ft_putnbr_fd.c \
       ft_memchr.c \
       ft_calloc.c \
       ft_strnstr.c \
       ft_substr.c \
       ft_strjoin.c \
       ft_strncmp.c \
       ft_strtrim.c \
       ft_putchar_fd.c \
       ft_putstr_fd.c \
       ft_putendl_fd.c \
       ft_isalnum.c \
       ft_toupper.c \
       ft_isprint.c \
       ft_strmapi.c \
       ft_itoa.c \

SRCS_BONUS = ft_lstnew.c \
	     ft_lstadd_front.c \
	     ft_lstsize.c \
	     ft_lstlast.c\
	     ft_lstadd_back.c \
	     ft_lstdelone.c \
	     ft_lstclear.c \
	     ft_lstiter.c \
	     ft_lstmap.c \

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(SRCS_BONUS:.c=.o)

HEADER = libft.h \

GCC = gcc -Wall -Wextra -Werror

RM = rm -rf

$(NAME) : 
	$(GCC) -c $(SRCS) $(SRCS_BONUS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

all : $(NAME)

clean : 
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

bonus : all
	$(GCC) -c $(SRCS_BONUS)
	ar rcs $(NAME) $(BONUS_OBJS)
so :
	$(GCC) -nostartfiles -fPIC $(SRCS) $(SRCS_BONUS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(BONUS_OBJS)
