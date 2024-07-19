# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 19:39:50 by daroldan          #+#    #+#              #
#    Updated: 2024/07/12 18:50:18 by davidrol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= so_long

#Compiler and CFlags
CC			= clang 
CFLAGS		= -Wall -Werror -Wextra -Ofast
INCLUDE		= -I $(LIB) -I $(MLX)
RM			= rm -rf
MLX42FLAGS	= -ldl -lglfw -pthread -lm

#Directories
LIB_DIR		= ./LIBGNL
MLX_DIR		= ./MLX42-master

#Libraries
LIB			= $(LIB_DIR)/libft.a
MLX			= $(MLX_DIR)/build/libmlx42.a

#Files
SRC_DIR		= ./src
SRC_FILES	= $(SRC_DIR)/main.c
#$(wildcards $(SRC_DIR)/*.c)
#$(shell find ./ -iname "*.c")

FILES_BONUS = 	

OBJ = $(SRC_FILES:.c=.o)

OBJ_BONUS = $(FILES_BONUS:.c=.o)

#MLX42 = $(make -C ./MLX42/build)

#LIBFT = $(make -C ./LIBFT)

all:$(NAME)
	@echo 🧔‍♀️ "Constructor"

$(NAME):$(OBJ)
	$(MAKE) -C $(LIB_DIR)
	$(MAKE) -C $(MLX_DIR)/build
	$(CC) $(CFLAGS) $(INCLUDE) $(OBJ) $(MLX42FLAGS) $(LIB) $(MLX) -o $(NAME)

bonus:
	$(CC) $(CFLAGS) -c $(FILES_BONUS)
	$(LIBFT) $(NAME) $(OBJ_BONUS)

clean:
	@$(RM) $(OBJ) $(OBJ_BONUS)
	@make clean -C ./LIBGNL
	@make clean -C ./MLX42-master/build
	@echo 🧑"clean"

fclean: clean
	@$(RM) $(NAME)
	@make fclean -C ./LIBGNL
	@echo 👩‍🦲"Library clean"

re: fclean all

.PHONY: all clean fclean re bonus 