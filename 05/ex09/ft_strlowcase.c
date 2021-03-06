/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 23:15:52 by alkozma           #+#    #+#             */
/*   Updated: 2018/10/29 23:18:12 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = str[i] >= 'A' && str[i] <= 'Z' ? str[i] += 32 : str[i];
		i++;
	}
	return (str);
}
