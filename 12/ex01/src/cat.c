/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:19:05 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/07 16:59:19 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

void	term_write(void)
{
	char c;

	while (read(0, &c, 1))
		write(1, &c, 1);
}

void	ft_error(char *fname)
{
	static int	i;
	int			f;
	char		cbuff[4096];
	int			a;

	write(2, "cat: ", 5);
	while (fname[i] != '\0')
		write(2, &fname[i++], 1);
	if (errno == 21)
		write(2, ": Is a directory\n", 17);
	else if (errno == 2)
		write(2, ": No such file or directory\n", 28);
	else if (errno == 13)
	{
		f = open(fname, O_RDONLY);
		if (f < 0)
			ft_error(fname);
		while ((a = read(f, &cbuff, 4096)))
			write(1, &cbuff, a);
		close(f);
	}
}

int		main(int argc, char **argv)
{
	char		cbuf[4096];
	static int	i;
	char		*fname;
	int			f;
	int			chars;

	if (argc == 1)
		term_write();
	i++;
	while (argc-- > 1)
	{
		fname = argv[i++];
		f = open(fname, O_RDWR);
		if (f < 0)
		{
			ft_error(fname);
			continue ;
		}
		while ((chars = read(f, &cbuf, 4096)))
			write(1, &cbuf, chars);
		close(f);
	}
}
