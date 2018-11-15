# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alkozma <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/11 08:55:10 by alkozma           #+#    #+#              #
#    Updated: 2018/11/14 23:06:55 by alkozma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = src/*.c
HEADERS = include
FLAGS = -Wall -Wextra -Werror

all: mkbsq

mkbsq:
	gcc $(SRC) -I$(HEADERS) $(FLAGS) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean mkbsq
