/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 09:14:55 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/06 14:12:45 by alkozma          ###   ########.fr       */
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
	{
		ft_putchar('0' + nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + nb  % 10);
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		ft_putchar(str[i++]);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int ft_atoi(char *str)
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
	if (str[pos] == '-')
	{
		pos++;
		is_positive = 0;
	}
	if (str[pos] == '-' || str[pos] == '+')
		pos++;
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

int ft_sqrt(int nb)
{
	int i;

	i = 0;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	while ((i * i) < 2147483647 && (i * i) <= nb)
	{
		i++;
		if ((i * i) == nb)
			return (i);
	}
	return (0);
}

int ft_is_prime(int nb)
{
	int i;

	if (nb % 2 == 0 || nb % 3 == 0 ||
			nb % 5 == 0 || nb < 1 ||
			nb == 4)
		return (0);
	i = 2;
	while (i < (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
