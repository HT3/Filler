/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:05:59 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 17:06:05 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*list;
	t_list	*last;
	t_list	*tmp;

	list = begin_list;
	last = NULL;
	if (!(list))
		list = NULL;
	while (list)
	{
		tmp = list->next;
		list->next = last;
		last = list;
		list = tmp;
	}
	begin_list = last;
}
