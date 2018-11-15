/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 13:04:10 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/11 19:55:09 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/rush00.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *c)
{
	int i[2];

	i[0] = 0;
	i[1] = 0;
	while (*c == ' ' || *c == '\t' || *c == '\n')
		c++;
	while (*c == '-' || *c == '+')
		i[0] = *c++ == '-' ? -1 : i[0];
	while (*c >= '0' && *c <= '9')
		i[1] = (i[1] * 10) + (*c++ - '0');
	return (i[0] == -1 ? -i[1] : i[1]);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
}
