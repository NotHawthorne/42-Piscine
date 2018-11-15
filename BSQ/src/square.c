/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 06:19:09 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/14 23:14:03 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		valid_square(t_coord **coords)
{
	t_coord *tmp;

	if (coords && *coords)
	{
		tmp = *coords;
		while (tmp->next)
		{
			if (tmp->x > g_c.width)
				return (0);
			if (tmp->c != g_c.full && tmp->c != g_c.empty &&
					tmp->c != g_c.obs && tmp->c != '\n')
				return (0);
			tmp = tmp->next;
		}
	}
	else
		return (0);
	init_pass(g_c.width, g_c.length, *coords);
	return (1);
}

void	print_square(t_coord **list, t_coord *coord)
{
	int		ring;
	t_coord	*temp;

	ring = 1;
	if (list && *list && coord)
	{
		temp = *list;
		while (test_ring(ring, coord))
			ring++;
		ring--;
		while (temp->next)
		{
			if (temp->x >= coord->x &&
					temp->x <= coord->x + ring &&
					temp->y >= coord->y &&
					temp->y <= coord->y + ring &&
					temp->c == g_c.empty)
				write(1, &g_c.full, 1);
			else
				ft_putchar(temp->c);
			temp = temp->next;
		}
	}
	clear_coords(*list);
	write(1, "\n", 1);
}

int		test_ring(int ring, t_coord *coord)
{
	int		x;
	int		y;
	t_coord	*tmp;

	x = 0;
	y = 0;
	if (coord->c == g_c.obs)
		return (0);
	while (x <= ring)
	{
		tmp = g_pass[(coord->x + x) + ((coord->y + ring) * g_c.width)];
		if (tmp == NULL || tmp->c != g_c.empty)
			return (0);
		x++;
		tmp = 0;
	}
	while (y <= ring)
	{
		tmp = g_pass[(coord->x + ring) + ((coord->y + y) * g_c.width)];
		if (tmp == NULL || tmp->c != g_c.empty)
			return (0);
		y++;
		tmp = 0;
	}
	return (1);
}

t_coord	*find_biggest_square(t_coord **list)
{
	int		biggest[2];
	t_coord *temp;
	int		bigsz;
	int		ring;

	biggest[0] = 0;
	biggest[1] = 0;
	bigsz = 0;
	temp = malloc(sizeof(t_coord));
	if (list && *list && (temp = *list))
	{
		while (temp->next)
		{
			ring = 0;
			while (test_ring(ring, temp) &&
					temp->x + bigsz < g_c.width && temp->y + bigsz < g_c.length)
				ring++;
			biggest[0] = ring > bigsz ? temp->x : biggest[0];
			biggest[1] = ring > bigsz ? temp->y : biggest[1];
			bigsz = ring > bigsz ? ring : bigsz;
			temp = temp->next;
		}
	}
	return (g_pass[biggest[0] + (biggest[1] * g_c.width)]);
}
