/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_token.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 10:17:22 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 11:23:09 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	push_token(t_filler *env)
{
	if (env->algo == 0)
		env->algo = 3;
	else if (env->algo == 1)
		env->algo = 2;
	else if (env->algo == 2)
		env->algo = 1;
	else if (env->algo == 3)
		env->algo = 0;
	if (env->ko == 1)
	{
		env->gameover = 1;
		ft_putnbr(env->push_y);
		ft_putchar(' ');
		ft_putnbr(env->push_x);
		ft_putchar('\n');
	}
	else
	{
		ft_putnbr(env->push_y);
		ft_putchar(' ');
		ft_putnbr(env->push_x);
		ft_putchar('\n');
	}
}
