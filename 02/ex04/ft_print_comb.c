/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:58:33 by alkozma           #+#    #+#             */
/*   Updated: 2018/10/25 18:12:31 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int num[3];

	num[0] = '0';
	while (num[0] <= '9')
	{
		num[1] = (num[0] + 1);
		while (num[1] <= '9')
		{
			num[2] = (num[1] + 1);
			while (num[2] <= '9')
			{
				ft_putchar(num[0]);
				ft_putchar(num[1]);
				ft_putchar(num[2]);
				if (num[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
