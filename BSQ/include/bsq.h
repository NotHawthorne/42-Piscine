/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 03:56:37 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/14 23:10:57 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

# define BUF_SIZE 4096

typedef struct		s_coord
{
	int				x;
	int				y;
	char			c;
	struct s_coord	*next;
	struct s_coord	*tail;
}					t_coord;

typedef struct		s_vars
{
	char			buf[BUF_SIZE];
	t_coord			*ret;
	int				i[7];
	char			firstline[16];
}					t_vars;

typedef struct		s_config
{
	int				width;
	int				length;
	char			full;
	char			empty;
	char			obs;
}					t_config;

t_config			g_c;
t_coord				*create_coord(int x, int y, char c);
t_coord				*read_file(char *fname);
t_coord				*find_biggest_square(t_coord **list);
t_coord				*read_stdin(void);
t_coord				**g_pass;
void				clear_coords(t_coord *start);
void				init_pass(int x, int y, t_coord *start);
void				push_coord(t_coord **coords, int x, int y, char c);
void				print_square(t_coord **list, t_coord *coord);
void				ft_putchar(char c);
void				ft_putnbr(int nbr);
int					parse_firstline(char *str);
int					ft_error(void);
int					valid_square(t_coord **coords);
int					test_ring(int ring, t_coord *coord);

#endif
