/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:12:05 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/08 19:15:34 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char str[129])
{
	static int i;

	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

int			in_arr(char c, char arr[129])
{
	int i;

	i = 0;
	while (arr[i])
	{
		if (arr[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void		ft_union(char *a, char *b)
{
	char	arr[129];
	int		pos;
	int		i;

	pos = 0;
	i = 0;
	while (a[i])
	{
		if (!in_arr(a[i], arr))
			arr[pos++] = a[i]; 
		i++;
	}
	i = 0;
	while (b[i])
	{
		if (!in_arr(b[i], arr))
			arr[pos++] = b[i];
		i++;
	}
	arr[pos] = '\n';
	arr[pos + 1] = '\0';
	ft_putstr(arr);
}
