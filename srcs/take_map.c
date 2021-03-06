/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 11:22:51 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 18:07:15 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int		take_map(t_filler *env)
{
	char	*line;
	int		i;

	i = 0;
	if (!env->map)
		if (!(env->map = ft_strnew_double(env->y_map, env->x_map)))
			return (-1);
	get_next_line(0, &line);
	while (i <= env->y_map)
	{
		get_next_line(0, &line);
		if (ft_isdigit(line[0]))
			env->map[i] = ft_strdup(line + 4);
		else
			take_token(env, line);
		i++;
	}
	if (env->o_pos_x == 0 && env->o_pos_y == 0 &&
			env->u_pos_x == 0 && env->u_pos_y == 0)
		position(env);
	return (0);
}
