/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 12:13:24 by alkozma           #+#    #+#             */
/*   Updated: 2018/10/28 12:41:48 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	determine(int x, int y, int sz, int len)
{
	if (y == sz)
		return ('A');
	if (y == 1)
		return ('C');
	else
		return ('B');
}

void	ft_putln(int x, int y)
{
	int len;
	int sz;

	sz = y;
	while (y > 0)
	{
		len = x;
		ft_putchar(determine(x, y, sz, len));
		while (len > 2)
		{
			if ((y == sz || y == 1) && x > 2)
				ft_putchar('B');
			else if (x > 2)
				ft_putchar(' ');
			len--;
		}
		if (x > 1)
			ft_putchar(determine(x, y, sz, len));
		ft_putchar('\n');
		y--;
	}
}

void	rush(int x, int y)
{
	ft_putln(x, y);
}
