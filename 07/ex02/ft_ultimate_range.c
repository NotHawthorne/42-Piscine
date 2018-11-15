/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 16:39:42 by alkozma           #+#    #+#             */
/*   Updated: 2018/10/31 17:13:09 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int len;
	int *ret;

	len = 0;
	i = 0;
	if (min >= max)
	{
		*range = (void*)0;
		return (0);
	}
	ret = (int*)malloc(sizeof(int) * (max - min));
	while (i <= (max - min))
	{
		ret[i] = min + i;
		i++;
	}
	*range = ret;
	return (i);
}
