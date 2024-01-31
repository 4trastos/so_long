# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davgalle <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/06 12:27:32 by davgalle          #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2024/01/31 12:39:56 by davgalle         ###   ########.fr        #
=======
#    Updated: 2024/01/30 17:18:09 by nicgonza         ###   ########.fr        #
>>>>>>> 301187d3ee6044b2bb1916d4c5d4b54977b26282
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = gcc

CFLAGS = -Wall -Werror -Wextra -Imlx -c -o -fsanitize=address -g3

RM = rm -f

LIB = ar rcs

LINKS = -I /usr/local/include -L /usr/local/lib \
    -l mlx -l ft -framework OpenGL -framework Appkit

SRCS = src/main.c \
	   src/ft_checker.c \
	   src/ft_error.c \
	   src/so_long_utils.c \
	   src/get_next_line.c \
	   src/get_next_line_utils.c \
	   src/ft_split.c \
	   src/create_struct.c \
	   src/init_game.c \
	   src/aux_utils.c \
	   src/more_utils.c \
	   src/solvemap.c \
	   src/more_more_utils.c \
	   src/check_movements.c \
	   src/reset_road.c \
	   src/ft_radar.c \
	   src/ft_window.c

OBJTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJTS) $(LINKS)
clean:
	$(RM) $(OBJTS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJTS)

re: all clean

.PHONY: all clean fclean re
