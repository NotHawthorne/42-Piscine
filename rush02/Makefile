# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alkozma <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/10 15:57:04 by alkozma           #+#    #+#              #
#    Updated: 2018/11/11 20:00:59 by alkozma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
SRC = src/main.c src/ft_tools.c src/id_rush.c
HEADERS = includes
FLAGS = -Wall -Wextra -Werror

all: mkrush

mkrush:
	gcc $(SRC) $(FLAGS) -I$(HEADERS) -o $(NAME)
	gcc rush00/ex00/rush00.c rush00/ex00/colle00.c $(FLAGS) -Irush00/ex00/include -o colle-00
	gcc rush00/ex00/rush01.c rush00/ex00/colle01.c $(FLAGS) -Irush00/ex00/include -o colle-01
	gcc rush00/ex00/rush02.c rush00/ex00/colle02.c $(FLAGS) -Irush00/ex00/include -o colle-02
	gcc rush00/ex00/rush03.c rush00/ex00/colle03.c $(FLAGS) -Irush00/ex00/include -o colle-03
	gcc rush00/ex00/rush04.c rush00/ex00/colle04.c $(FLAGS) -Irush00/ex00/include -o colle-04

fclean:
	rm -rf $(NAME) ./*-0*

re: fclean all
