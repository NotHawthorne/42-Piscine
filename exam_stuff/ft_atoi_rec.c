/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_rec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:54:40 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/09 16:03:01 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_base_conv(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'z')
		return ((c - 'a') + 10);
	if (c >= 'A' && c <= 'Z')
		return ((c - 'A') + 10);
	return (0);
}

int		ft_atoi_base(char *str, int base)
{
	static int i[2];

	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\v' || *str == '\f')
		str++;
	while (*str == '+' || *str == '-')
		i[0] = *str++ == '-' ? -1 : i[0];
	while ((*str >= '0' && *str <= '9') ||
			(*str >= 'a' && *str <= 'z') ||
			(*str >= 'A' && *str <= 'Z'))
		i[1] = (base * i[1]) + ft_base_conv(*str++);
	return (i[0] == -1 ? -i[1] : i[1]);
}

int		ft_atoi(char *str)
{
	static int i[2];

	while (*str == ' ' || *str == '\t' || *str == '\n' ||
			*str == '\v' || *str == '\f')
		str++;
	while (*str == '+' || *str == '-')
		i[0] = *str++ == '-' ? -1 : i[0];
	while (*str >= '0' && *str <= '9')
		i[1] = (10 * i[1]) + (*str++ - '0');
	return (i[0] == -1 ? -i[1] : i[1]);
}
