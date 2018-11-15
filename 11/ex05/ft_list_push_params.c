/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:45:58 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/07 18:25:36 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list		*ret;
	t_list		*ls;
	static int	i;

	while (i < ac)
	{
		ret = ft_create_elem(av[i]);
		ret->next = i++ == 0 ? NULL : ls;
		ls = ret;
	}
	return (ret);
}
