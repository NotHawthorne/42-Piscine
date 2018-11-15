/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 19:34:06 by alkozma           #+#    #+#             */
/*   Updated: 2018/10/26 13:49:28 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
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
