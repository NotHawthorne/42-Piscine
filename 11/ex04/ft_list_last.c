/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:59:00 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/06 15:08:15 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list *ret;

	if (begin_list)
	{
		ret = begin_list;
		while (ret->next)
			ret = ret->next;
		return (ret);
	}
	return (NULL);
}
