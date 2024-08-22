NAME                = push_swap

# Directories
LIBFT               = ./libft/libft.a
FT_PRINTF			= ./libft/ft_printf/libftprintf.a
INC                 = inc/
SRC_DIR             = srcs/
OBJ_DIR             = obj/

# Compiler and CFlags
CC                  = gcc
CFLAGS              = -Wall -Werror -Wextra -I $(INC) -g
RM                  = rm -f

# Source Files
PUSH_SWAP_DIR       = $(SRC_DIR)handle_errors.c \
	  $(SRC_DIR)a_to_b.c \
	  $(SRC_DIR)b_to_a.c \
	  $(SRC_DIR)push_swap.c \
	  $(SRC_DIR)stack_init.c \
	  $(SRC_DIR)push_op.c \
	  $(SRC_DIR)reverse_rotate_op.c \
	  $(SRC_DIR)rotate_op.c \
	  $(SRC_DIR)operations.c \
	  $(SRC_DIR)sort_stacks.c \
	  $(SRC_DIR)sort_three.c \
	  $(SRC_DIR)utils.c \
	  $(SRC_DIR)rotate_both.c 

# Concatenate all source files
SRCS                = $(PUSH_SWAP_DIR)

# Apply the pattern substitution to each source file in SRC and produce a corresponding list of object files in the OBJ_DIR
OBJ                 = $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

# Build rules
start:              
	@$(MAKE) all

$(LIBFT):
	@$(MAKE) -C ./libft

$(FT_PRINTF):
	@$(MAKE) -C ./libft/ft_printf

all:                $(NAME)

$(NAME):            $(OBJ) $(LIBFT) $(FT_PRINTF)
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(FT_PRINTF) -o $(NAME)

# Compile object files from source files
$(OBJ_DIR)%.o:      $(SRC_DIR)%.c 
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) -r $(OBJ_DIR)
	@$(MAKE) clean -C ./libft
	@$(MAKE) clean -C ./libft/ft_printf

fclean:             clean
	@$(RM) $(NAME)
	@$(MAKE) fclean -C ./libft
	@$(MAKE) fclean -C ./libft/ft_printf

re:                 fclean all

.PHONY:             start all clean fclean re