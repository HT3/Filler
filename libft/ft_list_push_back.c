/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:52:09 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 16:52:15 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list **begin_list, void *content)
{
	if (*begin_list)
	{
		if ((*begin_list)->next)
			ft_list_push_back(&(*begin_list)->next, content);
		else
			(*begin_list)->next = ft_create_elem(content);
	}
	else
		*begin_list = ft_create_elem(content);
}
