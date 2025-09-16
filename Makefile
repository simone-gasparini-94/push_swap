CC 			= 	cc
FLAGS		=	-g -Wall -Wextra -Werror
INCS		=	-Iinc										\
				-Ilibft/inc
SRC_DIR		=	src
OBJ_DIR		=	build
SRCS		=	main.c										\
				array.c										\
				list.c										\
				list_find.c									\
				list_rank.c									\
				sort.c										\
				sort_small.c								\
				sort_large.c								\
				operations.c								\
				check_args.c								\
				clean.c										\
				exit_failure.c
SRC_FILES	=	$(addprefix $(SRC_DIR)/, $(SRCS))
OBJS		=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))
LIBFT		=	-Llibft -lft
NAME		=	push_swap

all:		$(NAME)

$(NAME):	$(OBJS)
	@$(CC) $(OBJS) $(LIBFT) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(FLAGS) $(INCS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean:		clean
	@rm -f $(NAME)

re:			fclean all

