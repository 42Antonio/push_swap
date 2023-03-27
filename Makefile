FLAGS=-Werror -Wextra -Wall
NAME=push_swap
INCLUDES=libft/libft.a
SRC= auxiliar_swap.c \
		index_fun.c \
		initStacks.c \
		push_swap.c \
		radix_sort.c \
		sort.c \
		swaps_a.c \
		swaps_b.c \
		swaps.c \
		
all:
	@make -C libft/ all
	gcc $(SRC) -o $(NAME) $(FLAGS) $(INCLUDES)

clean:
	@make -C libft/ clean

fclean: clean
	rm -f $(NAME)
	@make -C libft/ fclean

re: fclean all