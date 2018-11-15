/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 13:26:20 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/04 16:00:01 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <stdio.h>

int		is_ok_mod3(int nbr, int box[9][9], int row, int column)
{
	int cols;
	int rows;
	int i;
	int b;

	cols = 0;
	rows = 0;
	cols = (column / 3) * 3;
	rows = (row / 3) * 3;
	i = 0;
	while (i < 3)
	{
		b = 0;
		while (b < 3)
		{
			if (box[rows + i][cols + b] == nbr)
				return (0);
			b++;
		}
		i++;
	}
	return (1);
}

int		is_ok_cross(int nbr, int box[9][9], int row, int column)
{
	int i;

	i = 0;
	while (i <= 8)
	{
		if (box[row][i] == nbr && i != column)
			return (0);
		i++;
	}
	i = 0;
	while (i <= 8)
	{
		if (box[i][column] == nbr && i != row)
			return (0);
		i++;
	}
	return (1);
}
