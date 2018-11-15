/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 14:56:19 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/05 16:00:52 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *ret;

	i = -1;
	if (!(ret = (int*)malloc(sizeof(int) * length)))
		return (ret);
	while (++i < length)
		ret[i] = (*f)(tab[i]);
	return (ret);
}
