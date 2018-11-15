/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatolik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 16:49:09 by tkatolik          #+#    #+#             */
/*   Updated: 2018/11/11 19:58:11 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/rush00.h"

void		rush(int x, int y)
{
	int		c;

	c = 2;
	if (x <= 0 || y <= 0)
		return ;
	else if (y == 1)
		ft_line_one(x);
	else
	{
		ft_line_one(x);
		while (y > c)
		{
			ft_line_two(x);
			c++;
		}
		ft_line_one(x);
	}
}

void		ft_line_one(int x)
{
	int		i;

	i = 2;
	if (x == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('o');
		while (x > i)
		{
			ft_putchar('-');
			i++;
		}
		ft_putchar('o');
		ft_putchar('\n');
	}
}

void		ft_line_two(int x)
{
	int		i;

	i = 2;
	if (x == 1)
	{
		ft_putchar('|');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('|');
		while (x > i)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar('|');
		ft_putchar('\n');
	}
}
