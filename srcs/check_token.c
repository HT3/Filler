/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_token.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 10:57:03 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 18:09:53 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

static int		check_token(t_filler *env, int i, int j)
{
	int			position;
	int			y;
	int			x;

	position = 0;
	y = 0;
	while (y < env->y_token)
	{
		x = 0;
		while (x < env->x_token)
		{
			if ((env->map[i + y][j + x] == env->user ||
						env->map[i + y][j + x] == env->user + 32)
					&& env->token[y][x] == '*')
				position++;
			if ((env->map[i + y][j + x] == env->oppon ||
						env->map[i + y][j + x] == env->oppon + 32)
					&& env->token[y][x] == '*')
				return (0);
			x++;
		}
		y++;
	}
	return ((position == 1) ? 1 : 0);
}

int				try_token(t_filler *env, int i, int j)
{
	if (i + env->y_token > env->y_map)
		return (0);
	else if (j + env->x_token > env->x_map)
		return (0);
	else
		return (check_token(env, i, j));
}
