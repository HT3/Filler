/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 16:46:05 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 16:46:11 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *content_ref, int (*cmp)())
{
	if (begin_list == NULL)
		return ;
	if ((*cmp)(begin_list->content, content_ref) == 0)
		f(begin_list->content);
	if (begin_list->next)
		ft_list_foreach_if(begin_list->next, f, content_ref, cmp);
}
