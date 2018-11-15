/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:43:06 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/07 18:25:21 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list				*temp;
	static unsigned int	i;

	while (i++ < nbr)
	{
		if (begin_list->next)
		{
			temp = begin_list->next;
			begin_list = begin_list->next;
		}
	}
	return (temp);
}
