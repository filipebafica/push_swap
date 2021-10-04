# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/24 15:15:54 by fbafica           #+#    #+#              #
#    Updated: 2021/10/02 18:54:26 by fbafica          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

MAIN_PATH = ./source/
OPERATIONS_PATH = ./source/operations/
UTILS_PATH = ./source/utils/
SORTING_PATH = ./source/sorting/
C_MAIN = main.c
C_OPERATIONS = push.c reverse.c rotate.c swap.c
C_UTILS = stack_utils1.c stack_utils2.c stack_utils3.c error_handling.c input_parser.c
C_SORTING = sort.c

INCLUDE = ./includes/
FLAGS = -g -fsanitize=address -Wall -Wextra -Werror

LIBFT_INCLUDE = ./libft/includes/
LIBFT = ./libft/libft.a

CC = gcc

all: $(NAME)

$(NAME): $(addprefix $(MAIN_PATH), $(C_MAIN)) $(addprefix $(OPERATIONS_PATH), $(C_OPERATIONS)) \
	$(addprefix $(UTILS_PATH), $(C_UTILS)) $(addprefix $(SORTING_PATH), $(C_SORTING)) $(LIBFT)
	@$(CC) $(FLAGS) $^ -I$(INCLUDE) -I$(LIBFT_INCLUDE) -o $@

$(LIBFT):
	@make -C libft

clean:
	@make clean -C libft

fclean: clean
	@make fclean -C libft
	@rm -f $(NAME)

re: fclean all