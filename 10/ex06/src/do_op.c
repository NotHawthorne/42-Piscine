/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 23:37:54 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/06 01:13:13 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		get_op(char c)
{
	char		*ops;
	static int	i;

	ops = "+-/*%";
	while (ops[i] != '\0')
	{
		if (ops[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		do_op(int a, int b, int op)
{
	int	(*arr[5])(int, int);

	arr[0] = &ft_add;
	arr[1] = &ft_sub;
	arr[2] = &ft_div;
	arr[3] = &ft_mult;
	arr[4] = &ft_mod;
	return (arr[op](a, b));
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (get_op(argv[2][0]) == 4 && ft_atoi(argv[3]) == 0)
		return (ft_putstr("Stop : modulo by zero\n"));
	if (get_op(argv[2][0]) == 2 && ft_atoi(argv[3]) == 0)
		return (ft_putstr("Stop : division by zero\n"));
	ft_putnbr(get_op(argv[2][0]) == -1 ? 0 :
			do_op(ft_atoi(argv[1]), ft_atoi(argv[3]), get_op(argv[2][0])));
	ft_putchar('\n');
	return (0);
}
