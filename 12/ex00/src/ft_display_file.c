/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:47:45 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/07 14:55:39 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		ft_error(char *msg)
{
	static int i;

	while (msg[i])
		write(2, &msg[i++], 1);
	return (0);
}

int		main(int argc, char **argv)
{
	int f;
	char c;

	if (argc > 2)
		return(ft_error("Too many arguments.\n"));
	if (argc <= 1)
		return(ft_error("File name missing.\n"));
	f = open(argv[1], O_RDONLY);
	while(read(f, &c, 1))
		write(1, &c, 1);
	close(f);
	return (0);
}
