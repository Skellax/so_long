NAME = so_long
SRC = src/init_vars.c src/init_game.c src/count_char.c src/so_long.c \
	 src/print_map.c src/init_map.c src/error_msg.c src/init_player_position.c \
	 src/check_files_map.c src/check_size_map.c src/ft_new_strlen.c src/ft_input.c \
	src/check_for_invalid_map_parameters.c src/check_map_parameters.c \
	src/win_msg.c  src/hook_movements.c src/harvest_bonus.c \
	src/print_new_exit.c src/victory.c src/put_image.c src/render_background.c \
   src/ft_close.c	
OBJ = $(SRC:.c=.o)
LIBFT_DIR = libft/
LIBFT_A = libft.a
LIBFT = $(addprefix $(LIBFT_DIR), $(LIBFT_A))

FLAGS = -Wall -Wextra -Werror 
LINKS = -lmlx -framework OpenGL -framework AppKit

NONE='\033[0m'
GREEN='\033[32m'
GRAY='\033[2;37m'
RED = '\033[31m'
CURSIVE='\033[3m'

all: $(NAME)

$(NAME): $(OBJ)
	@echo $(CURSIVE)$(GRAY)"  -Making Libft..." $(NONE)
	@make -C $(LIBFT_DIR)
	@echo $(CURSIVE)$(GRAY)" -Making so_long...." $(NONE)
	gcc $(FLAGS) $(OBJ) $(LIBFT) $(LINKS) -o $(NAME)
	@echo "$(NAME): $(GREEN)$(NAME) was created$(NONE)"

clean:
	@echo $(CURSIVE)$(GRAY) " -deleting objects..."$(NONE)
	@rm -rf $(OBJ)
	@echo "$(RED) objects was deleted$(NONE)"
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@echo $(CURSIVE)$(GRAY) " -deleting $(NAME)..."$(NONE)
	@rm -rf $(NAME)
	@echo "$(NAME): $(RED)$(NAME) was deleted$(NONE)"
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
