/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:29:28 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/06 14:58:16 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*temp;
	int		ret;

	ret = 0;
	if (begin_list)
	{
		temp = begin_list;
		while (temp)
		{
			temp = temp->next;
			++ret;
		}
	}
	return (ret);
}
