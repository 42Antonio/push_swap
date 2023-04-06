FLAGS=-Werror -Wextra -Wall
NAME=push_swap
INCLUDES=libft/libft.a
SRC=*.c
		
OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)

	@make -C libft/ all
	gcc $(FLAGS) -o $(NAME) $(OBJ) $(INCLUDES)

%.o: %.c
	gcc $(FLAGS) -c -o $@ $<

clean:
	@make -C libft/ clean
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	@make -C libft/ fclean

re: fclean all