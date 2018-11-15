/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 23:20:25 by alkozma           #+#    #+#             */
/*   Updated: 2018/10/29 23:31:54 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int lc;

	i = 0;
	lc = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = lc == 0 ? str[i] - 32 : str[i];
			lc++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = lc != 0 ? str[i] + 32 : str[i];
			lc++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			lc++;
		else
			lc = 0;
		i++;
	}
	return (str);
}
