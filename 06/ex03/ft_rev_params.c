/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:17:44 by alkozma           #+#    #+#             */
/*   Updated: 2018/10/30 15:51:57 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;
	int len;

	i = 1;
	len = 0;
	while (i < argc)
	{
		len = 0;
		while (argv[i][len] != '\0')
			len++;
		while (len >= 0)
		{
			ft_putchar(argv[i][len]);
			len--;
		}
		ft_putchar('\n');
		i++;
	}
}
