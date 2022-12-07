NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(shell find . ! -name "ft_lst*.c" -name "ft_*.c")
BONUS = $(shell find . -name "ft_lst*.c")
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)


all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -c $(SRC)
	@ar rc $(NAME) *.o
	@echo "\n\033[92m $@ built ✅\033[0m\n"
bonus:
	@$(CC) $(CFLAGS) -c $(BONUS)
	@ar rc $(NAME) *.o
	@echo "\n\033[92m $@ built ✅\033[0m\n"
clean:
	@/bin/rm -f  *.o
	@echo "\n\033[36m object files removed 👋\033[0m\n"
fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\n\033[36m executables removed 👋\033[0m\n"

re: fclean all

.PHONY: all bonus clean fclean re
