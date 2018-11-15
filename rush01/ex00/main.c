/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 12:51:12 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/04 15:59:49 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudoku.h"

int g_found = 0;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int		valid_arg(char *arg)
{
	int i;

	i = 0;
	while ((arg[i] >= '0' && arg[i] <= '9') || arg[i] == '.')
		i++;
	if (i != 9)
		return (0);
	else
		return (1);
}

int		args_valid(int argc, char *args[])
{
	if (argc - 1 != 9)
		return (ft_error());
	while (argc > 1)
	{
		if (!valid_arg(args[argc - 1]))
			return (ft_error());
		argc--;
	}
	return (1);
}

int		main(int argc, char *argv[])
{
	static int			box[9][9];
	static int			i[2];
	int					result;

	if (args_valid(argc, argv))
	{
		while (i[0] < 9)
		{
			i[1] = -1;
			while (++i[1] < 9)
			{
				if (argv[i[0] + 1][i[1]] == '.')
					box[i[0]][i[1]] = 0;
				else
					box[i[0]][i[1]] = argv[i[0] + 1][i[1]] - '0';
			}
			i[0]++;
		}
		shuffle_grid(box);
	}
	else
		return (0);
	return (result = g_found == 1 ? print_grid(box) : ft_error());
}
