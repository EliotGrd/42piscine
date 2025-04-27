SRCS = srcs/ft_putchar.c \
	   srcs/ft_swap.c \
	   srcs/ft_putstr.c \
	   srcs/ft_strlen.c \
	   srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

INCS = includes

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

RM = rm -f

all : $(NAME)

.c.o : 
	$(CC) $(CFLAGS) -c -I $(INCS) $< -o $@

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
	

$(NAME) : $(OBJS)
	ar rc $(NAME) $(SRCS)
	ranlib $(NAME)
