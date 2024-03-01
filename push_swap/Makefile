NAME = push_swap

SRCS = push_swap.c ft_atoi.c ft_split.c ft_strdup.c ft_strlcpy.c ft_strlen.c ft_substr.c \
		lstadd_back.c lstnew.c lstadd_front.c lstlast.c sa.c sb.c  pa.c pb.c ra.c rb.c rr.c \
		rra.c rrb.c rrr.c

OBJS = $(SRCS:.c=.o)
OBJS_M = $(SRCS_MAIN:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS) 
	 	$(CC) $(OBJS) -o $(NAME)
	
%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all