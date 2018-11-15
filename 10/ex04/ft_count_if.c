/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 16:46:26 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/05 18:22:37 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	static int	i[2];

	while (tab[i[0]])
		i[1] += (*f)(tab[i[0]++]) == 1 ? 1 : 0;
	return (i[1]);
}
