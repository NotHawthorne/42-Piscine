# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alkozma <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 14:19:27 by alkozma           #+#    #+#              #
#    Updated: 2018/11/07 13:21:46 by alkozma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = src/ft_display_file.c
H_FPATH = includes

all: mkdisplayfile

mkdisplayfile:
	gcc $(SRC) -I$(H_FPATH) -Wall -Wextra -Werror -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
