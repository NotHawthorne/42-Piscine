/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 08:14:09 by alkozma           #+#    #+#             */
/*   Updated: 2018/10/27 22:38:20 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int rt_num;

	if (nb < 0 || nb >= 13)
		return (0);
	rt_num = nb;
	nb--;
	while (nb > 1)
	{
		rt_num = rt_num * nb;
		nb--;
	}
	return (rt_num);
}
