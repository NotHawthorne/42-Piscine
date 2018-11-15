/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 04:00:07 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/14 21:27:30 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <time.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 10)
		ft_putchar(nbr + '0');
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
}

int		ft_error(void)
{
	write(2, "map error\n", 10);
	return (0);
}

int		read_input(t_coord *data, int method)
{
	if (!valid_square(&data))
	{
		if (method == 1)
			return (ft_error());
		else
			return (0);
	}
	print_square(&data, find_biggest_square(&data));
	return (1);
}

int		main(int argc, char **argv)
{
	t_coord		*data;
	char		*files[argc];
	static int	fcount;
	static int	itcount;

	if (argc == 1)
	{
		if (!read_input(read_stdin(), 0))
			return (ft_error());
	}
	else
	{
		while (++fcount < argc)
			files[fcount - 1] = argv[fcount];
		while (itcount < fcount - 1)
		{
			data = read_file(files[itcount++]);
			if (!read_input(data, 1))
				break ;
			if (itcount != fcount - 1)
				write(1, "\n", 1);
		}
	}
	return (0);
}
