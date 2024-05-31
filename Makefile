# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daroldan <daroldan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/31 19:39:50 by daroldan          #+#    #+#              #
#    Updated: 2024/05/31 19:57:09 by daroldan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= so_long

#Compiler and CFlags
CC		= clang 
CFLAGS	= -Wall -Werror -Wextra
RM		= rm -f

#Directories
LIBFT	= ./LIBFT/libft.a

#Files
FILES = 

FILES_BONUS = 	

OBJ = $(FILES:.c=.o)

OBJ_BONUS = $(FILES_BONUS:.c=.o)

all: $(NAME)
	@echo 🧔‍♀️ "Contructor"

$(NAME): $(OBJ)
	make -C ./LIBFT
	$(CC) $(CFLAGS) -c $(FILES)

bonus:
	$(CC) $(CFLAGS) -c $(FILES_BONUS)
	$(LIBFT) $(NAME) $(OBJ_BONUS)

clean:
	@$(RM) $(OBJ) $(OBJ_BONUS)
	@make clean -C ./LIBFT
	@echo 🧑"clean"

fclean: clean
	@$(RM) $(NAME)
	@make fclean -C ./LIBFT
	@echo 👩‍🦲"Library clean"

re: fclean all

.PHONY: all clean fclean re bonus ftprint
