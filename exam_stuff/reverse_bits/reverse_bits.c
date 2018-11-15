/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:21:37 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/08 19:17:27 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			print_bits(unsigned char octet)
{
	int i;

	i = 128;
	while (i > 0)
	{
		if (octet / i == 1)
		{
			write(1, "1", 1);
			octet -= i;
		}
		else
			write(1, "0", 1);
		i = i / 2;
	}
}

unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	int i2;
	unsigned char out;

	i = 128;
	i2 = 1;
	out = 0;
	while (i2 <= 128)
	{
		if (octet / i == 1)
		{
			octet -= i;
			out += i2;
		}
		i2 *= 2;
		i = i / 2;
	}
	return (out);
}
