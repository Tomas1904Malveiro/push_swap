NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
LIBFT_PATH = libft/
LIBFT = $(LIBFT_PATH)libft.a
SRCS = compute_disorder.c errors.c main.c push.c rotate.c \
       rrotate.c simple_algorithm.c stack_init.c stack_utils.c swap.c \
	   parse_args.c flags.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(LIBFT):
	make -C $(LIBFT_PATH)

$(NAME): $(OBJS) $(LIBFT)
	cc $(CFLAGS) $(OBJS) -L$(LIBFT_PATH) libft/libft.a -o $(NAME)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	make -C $(LIBFT_PATH) clean
	rm -f $(OBJS)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re