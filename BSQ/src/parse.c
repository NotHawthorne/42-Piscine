/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 04:00:21 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/14 23:59:39 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_coord		*read_file(char *fname)
{
	t_vars		v;

	while (v.i[5] != 5)
		v.i[v.i[5]++] = 0;
	v.ret = 0;
	if ((v.i[6] = open(fname, O_RDWR)) < 0)
		return (NULL);
	while ((v.i[4] = read(v.i[6], &(v.buf), BUF_SIZE)))
	{
		while (v.i[3] < v.i[4])
		{
			if (v.i[2] == 0)
				v.firstline[v.i[1]] = v.buf[v.i[3]];
			g_c.width = v.i[2] == 1 ? g_c.width + 1 : g_c.width;
			if (v.i[2] > 0)
				push_coord(&(v.ret), v.i[1], v.i[2] - 1, v.buf[v.i[3]]);
			if (v.buf[v.i[3]] == '\n' && v.i[1] % (g_c.width - 1) != 0)
				return (NULL);
			v.i[1] = v.buf[v.i[3]] == '\n' ? 0 : v.i[1] + 1;
			v.i[2] = v.buf[v.i[3]++] == '\n' ? v.i[2] + 1 : v.i[2];
		}
		v.i[3] = 0;
	}
	close(v.i[6] = parse_firstline(v.firstline) == 0 ? v.i[6] : v.i[6]);
	return (v.ret);
}

t_coord		*read_stdin(void)
{
	t_vars		v;

	while (v.i[5] != 5)
		v.i[v.i[5]++] = 0;
	v.ret = 0;
	while ((v.i[4] = read(0, &(v.buf), BUF_SIZE)))
	{
		while (v.i[3] < v.i[4])
		{
			if (v.i[2] == 0)
				v.firstline[v.i[1]] = v.buf[v.i[3]];
			g_c.width = v.i[2] == 1 ? g_c.width + 1 : g_c.width;
			if (v.i[2] > 0)
				push_coord(&(v.ret), v.i[1], v.i[2] - 1, v.buf[v.i[3]]);
			if ((v.buf[v.i[3]] == '\n' && v.i[1] % (g_c.width - 1) != 0) ||
					(g_c.length != 0 && v.i[2] > g_c.length))
				return (NULL);
			v.i[1] = v.buf[v.i[3]] == '\n' ? 0 : v.i[1] + 1;
			v.i[2] = v.buf[v.i[3]++] == '\n' ? v.i[2] + 1 : v.i[2];
		}
		v.i[3] = 0;
	}
	parse_firstline(v->firstline);
	return (v.ret);
}

int			parse_firstline(char *str)
{
	int i;
	int b;

	printf("%s", str);
	b = 0;
	i = 0;
	while (str[i] > 32 && str[i] != 127)
		i++;
	g_c.full = str[i - 1];
	g_c.obs = str[i - 2];
	g_c.empty = str[i - 3];
	while (b < i - 3)
	{
		if (str[b] >= '0' && str[b] <= '9')
			g_c.length = g_c.length * 10 + (str[b] - '0');
		b++;
	}
	return (0);
}
