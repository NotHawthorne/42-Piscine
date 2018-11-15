/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 12:57:24 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/04 15:57:00 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOKU_H
# define FT_SUDOKU_H

typedef struct
{
	int		row;
	int		column;
	int		i;
}			t_box_vars;

extern int	g_found;
int			is_ok_mod3(int nbr, int box[9][9], int row, int column);
int			is_ok_cross(int nbr, int box[9][9], int row, int column);
void		vars_init(t_box_vars *v);
void		ft_putchar(char c);
int			print_grid(int box[9][9]);
void		shuffle_grid(int box[9][9]);

#endif
