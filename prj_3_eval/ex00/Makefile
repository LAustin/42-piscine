# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/11 18:32:49 by laustin           #+#    #+#              #
#    Updated: 2017/11/11 18:39:05 by laustin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRC = srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_atoi.c srcs/eval_expr.c \
	  srcs/main.c

INCLUDES = -Iincludes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) $(INCLUDES)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
