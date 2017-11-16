# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 13:32:29 by laustin           #+#    #+#              #
#    Updated: 2017/11/08 15:11:41 by laustin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
SRC = srcs/ft_cat.c srcs/ft_putstr.c srcs/ft_putchar.c
INCLUDES = -Iincludes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) $(INCLUDES)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
