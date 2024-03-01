NAME = libft.a

SRCS = ft_atoi.c ft_isascii.c ft_memset.c ft_bzero.c ft_strrchr.c ft_isalnum.c ft_isdigit.c \
		ft_strchr.c ft_strlen.c ft_tolower.c ft_isalpha.c ft_isprint.c ft_strncmp.c \
		ft_toupper.c ft_strlcpy.c ft_memchr.c ft_memcpy.c ft_strlcat.c ft_strnstr.c \
		ft_memmove.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c

BSRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
		ft_lstmap_bonus.c

OBJS  = $(SRCS:.c=.o)
BOBJS = $(BSRCS:.c=.o)

CC = cc
AR = ar rc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
			$(AR) $(NAME) $(OBJS)

%.o: %.c libft.h
		$(CC) $(CFLAGS) -c $<

bonus: $(BOBJS)
			$(AR) $(NAME) $(BOBJS)

clean:
		$(RM) $(OBJS) $(BOBJS)

fclean: clean 
		$(RM) $(NAME)

re: fclean all

.PHONY : clean fclean re
