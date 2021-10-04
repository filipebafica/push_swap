# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbafica <fbafica@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 21:48:51 by fbafica           #+#    #+#              #
#    Updated: 2021/09/24 16:48:35 by fbafica          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

C_SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c \
			ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
			ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
			ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
			ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

C_PATH = ./source/

INCLUDES_PATH = ./includes/

OBJ = $(C_SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $@ $^ 

$(OBJ): $(addprefix $(C_PATH), $(C_SOURCES))
	@gcc -c -I$(INCLUDES_PATH) $^ -Wall -Wextra -Werror

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
