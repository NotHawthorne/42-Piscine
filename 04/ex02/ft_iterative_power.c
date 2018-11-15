/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 09:30:26 by alkozma           #+#    #+#             */
/*   Updated: 2018/10/27 09:40:00 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int ret_num;

	ret_num = nb;
	if (power <= 0)
		return (0);
	while (power > 1)
	{
		ret_num = ret_num * nb;
		power--;
	}
	return (ret_num);
}
