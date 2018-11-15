/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 22:23:10 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/01 20:47:28 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_new_word(char *str, int pos)
{
	if ((str[pos - 1] == '\n' || str[pos - 1] == ' ' || str[pos - 1] == '\t')
			&& ((str[pos] >= 'A' && str[pos] <= 'Z') ||
				(str[pos] >= 'a' && str[pos] <= 'z') ||
				(str[pos] >= '0' && str[pos] <= '9')))
		return (1);
	return (0);
}

int		ft_count_elems(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && i == 0 &&
				((str[i] >= 'A' && str[i] <= 'Z') ||
				(str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= '0' && str[i] <= '9'))) ||
				ft_new_word(str, i) == 1)
			count++;
		i++;
	}
	return (count);
}

char	*ft_get_str(char *str, int pos, int len)
{
	int		i;
	char	*ret;

	i = 0;
	if (!(ret = (char*)malloc(sizeof(char) * (len + 1))))
		return (ret);
	while (str[pos + i] != '\0' && i < len)
	{
		ret[i] = str[pos + i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

int		*ft_get_lens(char *str)
{
	int			*lens;
	static int	vars[3];

	lens = (int*)malloc(sizeof(int) * ft_count_elems(str));
	while (str[vars[1]] != '\0')
	{
		if ((str[vars[1]] == ' ' || str[vars[1]] == '\t' ||
				str[vars[1]] == '\n') && ft_new_word(str, vars[1] + 1))
		{
			vars[1]++;
			lens[vars[0]++] = vars[2];
			vars[2] = 0;
		}
		else if (((str[vars[1]++] >= 'A' && str[vars[1]] <= 'Z') ||
			(str[vars[1]] >= 'a' && str[vars[1]] <= 'z') ||
			(str[vars[1]] >= '0' && str[vars[1]] <= '9')) ||
				ft_new_word(str, vars[1]) == 0)
			vars[2]++;
		else
			vars[1]++;
	}
	lens[vars[0]] = lens > 0 ? vars[2] : lens[vars[0]];
	return (lens);
}

char	**ft_split_whitespaces(char *str)
{
	char	**test;
	int		i[4];
	int		*lens;

	i[0] = 0;
	i[1] = 0;
	lens = ft_get_lens(str);
	if (!(test = (char**)malloc(sizeof(char*) * (ft_count_elems(str) + 1))))
		return (test);
	while (i[0] < ft_count_elems(str))
	{
		if ((str[i[1]] != ' ' && str[i[1]] != '\n' && str[i[1]] != '\t') &&
			((str[i[1]] >= 'A' && str[i[1]] <= 'Z') ||
			(str[i[1]] >= 'a' && str[i[1]] <= 'z') ||
			(str[i[1]] >= '0' && str[i[1]] <= '9')))
		{
			test[i[0]] = ft_get_str(str, i[1], (lens[i[0]]));
			i[1] += lens[i[0]];
			i[0]++;
		}
		else
			i[1]++;
	}
	test[ft_count_elems(str)] = 0;
	return (test);
}
