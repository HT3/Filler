/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 10:35:25 by tjones            #+#    #+#             */
/*   Updated: 2018/07/17 10:43:28 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

void	position(t_filler *env)
{
	int		i;
	int		j;

	i = 0;
	env->oppon = (env->user == 'O') ? 'X' : 'O';
	while (i < env->y_map)
	{
		j = 0;
		while (j < env->x_map)
		{
			if (env->map[i][j] == env->oppon)
			{
				env->o_pos_x = j;
				env->o_pos_y = i;
			}
			if (env->map[i][j] == env->user)
			{
				env->u_pos_x = i;
				env->u_pos_y = i;
			}
			j++;
		}
		i++;
	}
	env->algo = (env->o_pos_y > env->u_pos_y) ? 1 : 0;
}
