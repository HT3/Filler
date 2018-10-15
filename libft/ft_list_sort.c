/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:06:52 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 17:06:59 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_sort(t_list *lst, int (*cmp)())
{
	void	*tempo;
	t_list	*overflow;

	overflow = lst;
	while (lst->next)
	{
		if (((*cmp)(lst->content, lst->next->content)) == 0)
		{
			tempo = lst->content;
			lst->content = lst->next->content;
			lst->next->content = tempo;
			lst = overflow;
		}
		else
			lst = lst->next;
	}
	lst = overflow;
	return (lst);
}
