/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkozma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 23:38:06 by alkozma           #+#    #+#             */
/*   Updated: 2018/11/06 01:01:46 by alkozma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

void		ft_putchar(char c);
void		ft_putnbr(int nb);
int			ft_putstr(char *str);
int			ft_atoi(char *str);
int			ft_add(int a, int b);
int			ft_sub(int a, int b);
int			ft_div(int a, int b);
int			ft_mult(int a, int b);
int			ft_mod(int a, int b);

#endif
