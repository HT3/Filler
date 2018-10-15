/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:05:23 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 17:05:31 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *tmp_list;
	t_list *tmp;

	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	tmp_list = *begin_list;
	tmp = tmp_list->next;
	ft_list_reverse(&tmp);
	tmp_list->next->next = tmp_list;
	tmp_list->next = NULL;
	*begin_list = tmp;
}
