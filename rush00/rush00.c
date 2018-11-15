/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 09:59:42 by alkozma           #+#    #+#             */
/*   Updated: 2018/10/28 18:51:13 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	println(int ceil, int len, int x, int y)
{
	while (y > 0)
	{
		if (y == ceil || y == 1)
			ft_putchar('o');
		else
			ft_putchar('|');
		while (len > 2)
		{
			if (y == ceil || y == 1)
				ft_putchar('-');
			else
				ft_putchar(' ');
			len--;
		}
		len = x;
		if ((y == ceil || y == 1) && x > 1)
			ft_putchar('o');
		else if (x > 1)
			ft_putchar('|');
		ft_putchar('\n');
		y--;
	}
}

void	rush(int x, int y)
{
	if (x > 0)
		println(y, x, x, y);
}
