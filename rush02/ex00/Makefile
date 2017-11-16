# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/12 13:46:37 by laustin           #+#    #+#              #
#    Updated: 2017/11/12 21:29:07 by lnakle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
RUSH00 = rush00
RUSH01 = rush01
RUSH02 = rush02
RUSH03 = rush03
RUSH04 = rush04
SRC = srcs/*.c
SRC00 = srcs2/rush00/*.c
SRC01 = srcs2/rush01/*.c
SRC02 = srcs2/rush02/*.c
SRC03 = srcs2/rush03/*.c
SRC04 = srcs2/rush04/*.c

INCLUDES = -Iincludes
INCLUDESRUSH = -Irushincludes

all: $(NAME) $(RUSH00) $(RUSH01) $(RUSH02) $(RUSH03) $(RUSH04)

$(RUSH00):
	gcc -Wall -Wextra -Werror -o $(RUSH00) $(SRC00) $(INCLUDESRUSH)
$(RUSH01):
	gcc -Wall -Wextra -Werror -o $(RUSH01) $(SRC01) $(INCLUDESRUSH)
$(RUSH02):
	gcc -Wall -Wextra -Werror -o $(RUSH02) $(SRC02) $(INCLUDESRUSH)
$(RUSH03):
	gcc -Wall -Wextra -Werror -o $(RUSH03) $(SRC03) $(INCLUDESRUSH)
$(RUSH04):
	gcc -Wall -Wextra -Werror -o $(RUSH04) $(SRC04) $(INCLUDESRUSH)
$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) $(INCLUDES)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME) $(RUSH00) $(RUSH01) $(RUSH02) $(RUSH03) $(RUSH04)

re: fclean all
