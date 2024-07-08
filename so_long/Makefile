# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davidrol <davidrol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 19:39:50 by daroldan          #+#    #+#              #
#    Updated: 2024/07/08 19:41:34 by davidrol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= so_long

#Compiler and CFlags
CC		= clang 
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -rf
MLX42FLAGS	= -ldl -lglfw -pthread -lm

#Directories
LIBFT	= ./LIBFT/libft.a
MLX42	= ./MLX42/build/libmlx42.a

#Files
FILES = main.c

FILES_BONUS = 	

OBJ = $(FILES:.c=.o)

OBJ_BONUS = $(FILES_BONUS:.c=.o)

all: $(NAME)
	@echo 🧔‍♀️ "Constructor"

$(NAME): $(OBJ)
	make -C ./LIBFT
	make -C ./MLX42/build
	$(CC) $(CFLAGS) $(OBJ) $(MLX42FLAGS) $(LIBFT) $(MLX42) -o $(NAME)

bonus:
	$(CC) $(CFLAGS) -c $(FILES_BONUS)
	$(LIBFT) $(NAME) $(OBJ_BONUS)

clean:
	@$(RM) $(OBJ) $(OBJ_BONUS)
	@make clean -C ./LIBFT
	@make clean -C ./MLX42/build
	@echo 🧑"clean"

fclean: clean
	@$(RM) $(NAME)
	@make fclean -C ./LIBFT
	@echo 👩‍🦲"Library clean"

re: fclean all

.PHONY: all clean fclean re bonus 