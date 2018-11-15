/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:18:05 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/09 13:54:29 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	static int pos;
	int sign;
	static int outnum;

	sign = 1;
	while (str[pos] == ' ' || str[pos] == '\n' || str[pos] == '\t')
		pos++;
	while (str[pos] == '-' || str[pos] == '+')
	{
		if (str[pos++] == '-')
			sign = -1;
	}
	while (str[pos] >= '0' && str[pos] <= '9')
	{
		if (outnum == 214748364 && sign == -1 && str[pos] == '8')
			return (-2147483648);
		outnum = (outnum * 10) + (str[pos++] - '0');
	}
	return (outnum * sign);
}

char	convert_hex(int nbr)
{
	if (nbr >= 0 && nbr <= 9)
		return ('0' + nbr);
	if (nbr >= 10 && nbr <= 15)
		return ('a' + (nbr % 10));
	return ('z');
}

void	ft_putstrrev(char *str, int len)
{
	while (len >= 0)
		write(1, &str[len--], 1);
}

void	print_hex(int nbr)
{
	static int i;
	int neg;
	char out[10];

	neg = 0;
	if (nbr == -2147483648)
	{
		ft_putstrrev("00000008-", 9);
		return ;
	}
	if (nbr < 0)
	{
		neg = 1;
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		out[i++] = convert_hex(nbr % 16);
		nbr /= 16;
	}
	if (neg == 1)
		out[i++] = '-';
	ft_putstrrev(out, i - 1);
}
