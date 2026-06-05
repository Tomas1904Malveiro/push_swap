NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_PATH = libft/
LIBFT = $(LIBFT_PATH)libft.a
PRINTF_PATH = printf/
PRINTF = $(PRINTF_PATH)libftprintf.a
SRCS = compute_disorder.c errors.c main.c push.c rotate.c \
        rrotate.c simple_algorithm.c stack_init.c stack_utils.c \
        swap.c parse_args.c flags.c medium_algorithm.c \
    	complex_algorithm.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(LIBFT):
	make -C $(LIBFT_PATH)

$(PRINTF):
	make -C $(PRINTF_PATH)

$(NAME): $(OBJS) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C $(LIBFT_PATH) clean
	make -C $(PRINTF_PATH) clean
	rm -f $(OBJS)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	make -C $(PRINTF_PATH) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re