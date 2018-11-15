/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 09:59:42 by alkozma           #+#    #+#             */
/*   Updated: 2018/10/28 12:08:50 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	println(int ceil, int len, int x, int y)
{
	while (y > 0)
	{
		if (y == ceil)
			ft_putchar('/');
		else if (y == 1)
		   ft_putchar('\\');	
		else
			ft_putchar('*');
		while (len > 2)
		{
			if (y == ceil || y == 1)
				ft_putchar('*');
			else 
				ft_putchar(' ');
			len--;
		}
		len = x;
		if (y == ceil && x > 1)
			ft_putchar('\\');
		else if (y == 1)
			ft_putchar('/');
		else if (x > 1)
			ft_putchar('*');
		ft_putchar('\n');
		y--;
	}
}

void	rush(int x, int y)
{
	if (x > 0)
		println(y, x, x, y);
}
