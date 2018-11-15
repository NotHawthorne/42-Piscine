/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 22:33:15 by alkozma           #+#    #+#             */
/*   Updated: 2018/10/29 23:05:01 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	sum1;
	unsigned int	sum2;
	int				retnum;
	int				i;

	sum1 = 0;
	sum2 = 0;
	retnum = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		sum1 += s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		sum2 += s2[i];
		i++;
	}
	retnum = sum1 < sum2 ? retnum + 1 : retnum - 1;
	retnum = sum1 == sum2 ? 0 : retnum;
	return (retnum);
}
