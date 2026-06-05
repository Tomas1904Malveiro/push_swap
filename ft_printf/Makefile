NAME =  libftprintf.a
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c print_char.c print_hex.c print_number.c print_pointer.c print_string.c print_unsigned.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re