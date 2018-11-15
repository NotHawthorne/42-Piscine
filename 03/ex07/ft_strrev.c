/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 12:21:04 by alkozma           #+#    #+#             */
/*   Updated: 2018/10/25 19:25:28 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	x;

	i = 0;
	len = 0;
	while (str[len])
	{
		len++;
	}
	len--;
	while (i < len)
	{
		x = str[len];
		str[len] = str[i];
		str[i] = x;
		i++;
		len--;
	}
	return (str);
}
