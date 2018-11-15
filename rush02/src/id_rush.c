/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   id_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkatolik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 00:27:28 by tkatolik          #+#    #+#             */
/*   Updated: 2018/11/11 19:28:28 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush.h"

void	id_extra(char *results, char *corners, int len, int wid)
{
	if (corners[0] == 'A' && corners[1] == 'A' && wid == 1)
		results[0] = '2';
	if (corners[0] == 'A' && corners[1] == 'A' && len == 1)
		results[0] = results[0] == '2' ? results[0] : '3';
	results[0] = corners[0] == 'o' ? '0' : results[0];
	results[0] = corners[0] == '/' ? '1' : results[0];
	if (corners[0] + corners[1] + corners[2] == 197 && corners[1] == 'C')
		results[0] = '4';
	if (corners[0] + corners[1] + corners[2] == 197 && corners[1] == 'A')
		results[0] = '2';
	if (corners[0] + corners[1] + corners[2] == 199)
		results[0] = '3';
}

void	id_rush(char *corners, int len, int wid)
{
	char	results[5];

	if (corners[0] == 'A' && len == 1 && wid == 1)
	{
		results[0] = '2';
		results[1] = '3';
		results[2] = '4';
	}
	if (corners[0] == 'A' && corners[1] == 'C' && wid == 1)
	{
		results[0] = '3';
		results[1] = '4';
	}
	if (corners[0] == 'A' && corners[2] == 'C' && len == 1)
	{
		results[0] = '2';
		results[1] = '4';
	}
	id_extra(results, corners, len, wid);
	print_rush(results, len, wid);
}
