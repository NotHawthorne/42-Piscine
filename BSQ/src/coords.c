/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coords.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 04:30:00 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/14 23:12:15 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void		push_coord(t_coord **coords, int x, int y, char c)
{
	t_coord *ret;
	t_coord	*head;

	if (coords && *coords)
	{
		ret = *coords;
		head = *coords;
		if (ret->tail == NULL)
		{
			while (ret->next)
				ret = ret->next;
		}
		else
			ret = ret->tail;
		ret->next = create_coord(x, y, c);
		head->tail = ret->next;
	}
	else
		*coords = create_coord(x, y, c);
}

t_coord		*create_coord(int x, int y, char c)
{
	t_coord *newcoord;

	if (!(newcoord = malloc(sizeof(t_coord))))
		return (newcoord);
	newcoord->x = x;
	newcoord->y = y;
	newcoord->c = c;
	newcoord->next = NULL;
	newcoord->tail = NULL;
	return (newcoord);
}

void		clear_coords(t_coord *start)
{
	t_coord *temp;

	g_c.length = 0;
	g_c.width = 0;
	if (start)
	{
		while (start->next)
		{
			temp = start->next;
			start->next = NULL;
			start->tail = NULL;
			start = NULL;
			free(start);
			start = temp;
		}
	}
}
