# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alkozma <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 14:19:27 by alkozma           #+#    #+#              #
#    Updated: 2018/11/06 01:14:05 by alkozma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do_op

SRC = src/ft_tools.c src/ft_op.c src/do_op.c

H_FPATH = include

FLAGS = -Wall -Wextra -Werror

all: mkdoop

mkdoop:
	gcc $(SRC) -I$(H_FPATH) $(FLAGS) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
