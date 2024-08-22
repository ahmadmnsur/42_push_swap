CC = cc
AR = ar -rcs
NAME = libftprintf.a
SRCS = ft_hex.c ft_pointer.c ft_printf.c ft_putchr.c ft_putnbr.c ft_putstr.c ft_unbr.c
FLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
