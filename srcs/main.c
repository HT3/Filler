/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 10:27:34 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 18:06:51 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"

int		main(void)
{
	char		*line;
	t_filler	*env;

	if (!(env = ft_memalloc(sizeof(t_filler))))
		return (-1);
	get_next_line(0, &line);
	env->user = (ft_atoi(line + 10) == 1) ? 'O' : 'X';
	while (69)
	{
		get_next_line(0, &line);
		env->y_map = ft_atoi(&line[8]);
		env->x_map = ft_atoi(&line[11]);
		take_map(env);
		if (algo(env) == 0)
			env->ko = 1;
		push_token(env);
		if (env->gameover == 1)
			break ;
	}
	free(env);
	return (0);
}
