/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 13:26:20 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/04 15:57:55 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		print_grid(int box[9][9])
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (i < 9)
	{
		while (b < 9)
		{
			ft_putchar(box[i][b] + '0');
			if (b < 8)
				ft_putchar(' ');
			b++;
		}
		ft_putchar('\n');
		b = 0;
		i++;
	}
	return (0);
}

void	vars_init(t_box_vars *v)
{
	v->row = 0;
	v->column = 0;
	v->i = 0;
}

int		check_row(int box[9][9], t_box_vars *v)
{
	while (box[v->row][v->column] != 0)
	{
		if (v->row == 8)
		{
			v->row = 0;
			v->column++;
			if (v->column == 9)
			{
				g_found = 1;
				return (1);
			}
		}
		else
			v->row++;
	}
	return (0);
}

void	shuffle_grid(int box[9][9])
{
	t_box_vars	v;

	vars_init(&v);
	if (check_row(box, &v))
		return ;
	while (++v.i < 10)
	{
		if (is_ok_mod3(v.i, box, v.row, v.column) &&
			is_ok_cross(v.i, box, v.row, v.column))
		{
			box[v.row][v.column] = v.i;
			shuffle_grid(box);
			if (g_found)
				return ;
		}
	}
	box[v.row][v.column] = 0;
	return ;
}
