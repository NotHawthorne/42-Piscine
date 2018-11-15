/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 21:08:13 by alkozma           #+#    #+#             */
/*   Updated: 2018/10/31 21:50:24 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_calc_size(char **argv)
{
	int i;
	int len;
	int t;

	i = 1;
	len = 0;
	while (argv[i])
	{
		t = 0;
		while (argv[i][t])
		{
			len++;
			t++;
		}
		len++;
		i++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		len;
	char	*ret;
	int		i;
	int		t;
	int		v;

	len = ft_calc_size(argv);
	i = 1;
	v = 0;
	if (!(ret = (char*)malloc(sizeof(char) * (len + 1))))
		return (ret);
	while (i < argc)
	{
		t = 0;
		while (argv[i][t])
		{
			ret[v] = argv[i][t];
			v++;
			t++;
		}
		ret[v++] = '\n';
		i++;
	}
	return (ret);
}
