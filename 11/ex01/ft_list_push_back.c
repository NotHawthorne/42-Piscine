/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:45:13 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/06 19:09:27 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*ret;

	if (begin_list && *begin_list)
	{
		ret = *begin_list;
		while (ret->next)
			ret = ret->next;
		ret->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
