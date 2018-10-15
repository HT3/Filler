# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjones <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/17 11:25:14 by tjones            #+#    #+#              #
#    Updated: 2018/08/07 11:43:18 by tjones           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tjones.filler

SRC_PATH = ./srcs/

OBJ_PATH = ./objs/

INC_PATH = ./includes/

SRC_NAME = main.c \
		   take_map.c \
		   position.c \
		   take_token.c \
		   push_token.c \
		   check_token.c \
		   algo.c \

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

LDFLAGS = -L./libft/

LFT = -lft

CC = gcc $(CFLAGS)
#-fsanitize=address

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ) $(INC_PATH)
		@make -C./libft/
		@echo "\033[34mCreation of $(NAME) ...\033[0m"
		@$(CC) $(LDFLAGS) $(LFT) $(OBJ) -o $@
		@echo "\033[32m$(NAME) created\n\033[0m"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
		@mkdir $(OBJ_PATH) 2> /dev/null || true
		@$(CC) -I$(INC_PATH) -o $@ -c $<

clean: cleanlib
		@echo "\033[33mRemoval of .o files of $(NAME) ...\033[0m"
		@rm -f $(OBJ)
		@rmdir $(OBJ_PATH) 2> /dev/null || true
		@echo "\033[31mFiles .o deleted\n\033[0m"

cleanlib:
		@make clean -C ./libft/

fclean: clean fcleanlib
		@echo "\033[33mRemoval of $(NAME)...\033[0m"
		@rm -f $(NAME)
		@echo "\033[31mBinary $(NAME) deleted \n\033[0m"

fcleanlib:
		@make fclean -C ./libft/

re : fclean all

norme:
		norminette $(SRC)
		norminette $(INC_PATH)*.h

.PHONY : all clean fclean re
