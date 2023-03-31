NAME		= push_swap

INC			= libft/

LIB			= $(INC)libft.a

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

SRC			=   src/main.c \
				src/push_swap.c \
				src/management.c \
				src/check.c \
				src/sort.c \
				src/swap.c \
				src/rotate.c \
				src/push.c \
				src/radix.c

				
OBJ_SRC		= $(SRC:.c=.o)

%.o: %.c
	@$(CC)$(FLAGS) -c $< -o $@

all:	$(LIB) $(NAME)

$(LIB):
	@make -C $(INC)

$(NAME)		: $(LIB) $(OBJ_SRC) 
	@$(CC) $(CFLAGS) $(LIB) $(OBJ_SRC) -o $(NAME)
	@echo "$(GREEN)$(NAME) -> program created! $(DEFAULT)"

clean		:
	@rm -f $(OBJ_SRC)
	@make -C $(INC) clean
	@echo "$(YELLOW)$(NAME) -> Object files deleted. "

fclean		: clean
	@rm -f $(NAME)
	@make -C $(INC) fclean
	@echo "$(RED)$(NAME) program -> Program and objects files deleted. "

re			: fclean all

.PHONY		:
	all clean fclean re

#COLORS
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
DEFAULT = \033[0m