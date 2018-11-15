/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pass.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 19:42:09 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/12 20:37:32 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	init_pass(int x, int y, t_coord *start)
{
	int			i;
	t_coord		*temp;

	i = 0;
	g_pass = malloc(sizeof(t_coord) * (x * y));
	if (start)
	{
		temp = start;
		while (temp->next)
		{
			g_pass[i] = temp;
			i++;
			temp = temp->next;
		}
	}
}
