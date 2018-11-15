/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 10:34:06 by alkozma           #+#    #+#             */
/*   Updated: 2018/10/30 23:02:31 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi2(char *str)
{
	int pos;
	int is_positive;
	int num;

	pos = 0;
	is_positive = 1;
	num = 0;
	while (str[pos] == ' ' || str[pos] == '\t' ||
			str[pos] == '\n' || str[pos] == '+' ||
			str[pos] == '\r' || str[pos] == '\v' || str[pos] == '\f')
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
		num = (num * 10) + (str[pos] - '0');
		pos++;
	}
	num = is_positive == 0 ? -num : num;
	return (num);
}
