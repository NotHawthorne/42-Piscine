/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 14:11:35 by alkozma           #+#    #+#             */
/*   Updated: 2018/10/31 16:39:18 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*ret;

	if (min >= max)
		return (NULL);
	if (!(ret = (int*)malloc((max - min) * sizeof(int))))
		return (ret);
	while (min <= max)
	{
		ret[max - min] = max;
		max--;
	}
	return (ret);
}
