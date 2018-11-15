/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:52:41 by alkozma           #+#    #+#             */
/*   Updated: 2018/10/31 14:00:11 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swapstr(char **a, char **b)
{
	char *c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_iputstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *str1, char *str2)
{
	int i;
	int b;
	int c;

	i = 0;
	b = 0;
	c = 0;
	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] > str2[i])
			return (1);
		else if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int sorted;
	int i;

	i = 1;
	sorted = 0;
	while (sorted == 0)
	{
		sorted = (!argv[i + 1]) ? sorted : 1;
		while (i < argc && argv[i + 1] != '\0')
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swapstr(&argv[i], &argv[i + 1]);
				i = 0;
			}
			i++;
		}
	}
	i = 1;
	while (argv[i])
	{
		ft_iputstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}
