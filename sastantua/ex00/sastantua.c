/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sastantua.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 10:06:21 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/13 18:58:13 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_calc_ws(int size)
{
	int retnum;
	int itnum;
	int row;

	if (size == 0)
		return (size);
	else if (size == 1)
		return (7);
	else if (size == 2)
		return (19);
	else
	{
		size--;
		retnum = 33;
		itnum = 14;
		row = 3;
		while (row <= size)
		{
			itnum += (((row % 2) * 2) + 2);
			retnum += itnum;
			row++;
		}
	}
	return (retnum);
}

void	ft_putspc(int spacers, int size, int i, int spc)
{
	int szflip;

	szflip = 0;
	if (size % 2 == 0)
		szflip--;
	if (spacers <= size + i && spacers >= i - (szflip - 1) && spc < szflip)
	{
		if (spacers == (ft_calc_ws(size) / 2) - (szflip - 2)
				&& spc == szflip / 2)
			ft_putchar('$');
		else
			ft_putchar('|');
	}
	else
		ft_putchar('*');
}

void	ft_putln(int whitespace, int spacers, int size, int spc)
{
	int vars[2];

	vars[1] = size;
	vars[1] = (vars[1] % 2 == 0) ? vars[1] - 1 : vars[1];
	vars[0] = 0;
	while (whitespace-- > 0)
		ft_putchar(' ');
	ft_putchar('/');
	while (spacers-- > 0)
	{
		if (spacers <= vars[1] + vars[0] && spacers >= vars[0] - (vars[1] - 1)
				&& spc < vars[1])
		{
			if (spacers == (ft_calc_ws(size) / 2) - (vars[1] - 1)
					&& spc == vars[1] / 2 && size > 4)
				ft_putchar('$');
			else
				ft_putchar('|');
		}
		else
			ft_putchar('*');
		vars[0]++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

int		ft_calc_neg_ws(int ws, int add_sp)
{
	if (add_sp > 0)
		ws = ws - 2 - ((add_sp / 2) - 1);
	else
		ws = ws - 2;
	return (ws);
}

void	sastantua(int size)
{
	int ws;
	int spacers;
	int add_sp;
	int i;
	int a;

	ws = (ft_calc_ws(size) / 2) - 1;
	spacers = 1;
	add_sp = 0;
	i = 0;
	while (i++ < size)
	{
		a = 1;
		while (a <= (i + 2))
		{
			ft_putln(ws, spacers, size, ws);
			ws--;
			spacers = spacers + 2;
			a++;
		}
		add_sp = (i >= 3 && i % 2 != 0) ? add_sp + 2 : add_sp;
		ws = i >= 3 ? ws - 1 : ws;
		ws = ft_calc_neg_ws(ws, add_sp);
		spacers = spacers + 4 + add_sp;
	}
}

int		main(void)
{
	sastantua(25);
}
