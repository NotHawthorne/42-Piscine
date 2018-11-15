# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alkozma <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 14:19:27 by alkozma           #+#    #+#              #
#    Updated: 2018/11/07 15:33:06 by alkozma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cat
SRC = src/cat.c
H_FPATH = includes

all: mkcat

mkcat:
	gcc $(SRC) -I$(H_FPATH) -Wall -Wextra -Werror -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
