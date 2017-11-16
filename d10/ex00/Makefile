# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 13:19:15 by laustin           #+#    #+#              #
#    Updated: 2017/11/06 19:18:28 by laustin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_putstr.c \
	  srcs/ft_swap.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -Iincludes
	ar rc $(NAME) ft_putchar.o ft_strcmp.o ft_strlen.o ft_putstr.o ft_swap.o
	ranlib $(NAME)

clean:
	/bin/rm -f ft_putchar.o ft_strcmp.o ft_strlen.o ft_putstr.o ft_swap.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
