# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 09:12:35 by enennige          #+#    #+#              #
#    Updated: 2017/11/15 18:49:29 by enennige         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = srcs/check_input.c srcs/draw_square.c srcs/find_squares.c srcs/ft_atoi.c \
	  srcs/ft_putchar.c srcs/ft_puterror.c srcs/ft_putnbr.c srcs/ft_putstr.c \
	  srcs/ft_strcpy.c srcs/ft_strlen.c srcs/init_board.c srcs/main.c \
	  srcs/read_input.c
HEADER = includes

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) -I$(HEADER) -Wall -Wextra -Werror

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
