/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 13:25:32 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/11 19:28:37 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

void	define_shape(int len, int wid)
{
	if (len == 1 && wid == 1)
		ft_putstr(" || [one symbol] [1] [1");
	else if ((len == 1 && wid > 1) || (len > 1 && wid == 1))
	{
		ft_putstr(" || [line] [");
		ft_putnbr(len);
		ft_putstr("] [");
		ft_putnbr(wid);
	}
	else if (len == wid)
	{
		ft_putstr(" || [square] [");
		ft_putnbr(len);
		ft_putstr("] [");
		ft_putnbr(wid);
	}
	else
	{
		ft_putstr(" || [rectangle] [");
		ft_putnbr(len);
		ft_putstr("] [");
		ft_putnbr(wid);
	}
}

int		ft_error(void)
{
	ft_putstr("aucune");
	return (0);
}

void	print_rush(char *results, int len, int wid)
{
	int i;

	i = 0;
	if (!results[i])
	{
		ft_putstr("aucune");
		return ;
	}
	while (results[i])
	{
		ft_putstr("[rush-0");
		ft_putchar(results[i]);
		ft_putstr("] [");
		ft_putnbr(len);
		ft_putstr("] [");
		ft_putnbr(wid);
		ft_putstr("]");
		if (results[i + 1])
			ft_putstr(" || ");
		i++;
	}
	define_shape(len, wid);
	ft_putstr("]");
}

void	count_rush(void)
{
	static int	xy[2];
	char		buffer[1];
	char		last;
	char		corners[4];

	while (read(STDIN_FILENO, buffer, 1))
	{
		if (xy[0] == 0 && xy[1] == 0)
			corners[0] = buffer[0];
		if (buffer[0] != '\n' && xy[1] == 0)
			xy[0]++;
		if (buffer[0] == '\n')
		{
			if (xy[1] == 0)
				corners[1] = last;
			xy[1]++;
		}
		if (buffer[0] != '\n')
			last = buffer[0];
	}
	corners[2] = last;
	id_rush(corners, xy[0], xy[1]);
}

int		main(void)
{
	count_rush();
	ft_putchar('\n');
}
