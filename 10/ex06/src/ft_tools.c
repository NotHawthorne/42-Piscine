/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 09:14:55 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/06 01:12:55 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb < 10)
		ft_putchar('0' + nb);
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + nb % 10);
	}
}

int		ft_putstr(char *str)
{
	static int i;

	while (str[i] != 0)
		ft_putchar(str[i++]);
	return (0);
}

int		ft_atoi(char *str)
{
	int pos;
	int is_positive;
	int num;

	pos = 0;
	is_positive = 1;
	num = 0;
	while (str[pos] == ' ' || str[pos] == '\t' ||
			str[pos] == '\n' || str[pos] == '+')
		pos++;
	while (str[pos] == '-' || str[pos] == '+')
	{
		if (str[pos] == '-')
			is_positive = 0;
		pos++;
	}
	while (str[pos] >= '0' && str[pos] <= '9')
	{
		num *= 10;
		num += (str[pos] - '0');
		pos++;
	}
	if (is_positive == 0)
		num = -num;
	return (num);
}
