/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 10:54:30 by alkozma           #+#    #+#             */
/*   Updated: 2018/10/31 14:20:39 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*c;
	int		b;

	i = 0;
	b = 0;
	while (src[i])
		i++;
	c = (char*)malloc(sizeof(*src) * (i + 1));
	while (b <= i)
	{
		c[b] = src[b];
		b++;
	}
	return (c);
}
