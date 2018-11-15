/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 20:27:40 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/02 13:42:37 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_twelvehr(int hour)
{
	if ((hour < 24 || hour > 24) && hour > 12)
		return (hour % 12);
	else if (hour == 24)
		return (12);
	else if (hour == 0)
		return (12);
	else
		return (hour);
}

char *ft_ampm(int hour)
{
	if (hour < 12)
		return ("A.M.");
	if (hour >= 12 && hour < 24)
		return ("P.M.");
	if (hour >= 24)
		return ("A.M.");
	return ("A.M.");
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 ", ft_twelvehr(hour));
	printf("%s AND %d.00", ft_ampm(hour), ft_twelvehr(hour + 1));
	printf(" %s\n", ft_ampm(hour + 1));
}
