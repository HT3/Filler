/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:47:59 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 17:57:06 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strnew_double(size_t x, size_t y)
{
	char	**tab;
	char	*tab2;
	size_t	i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * y);
	tab2 = (char *)malloc(sizeof(char) * x * y);
	while (i < y)
	{
		tab[i] = &tab2[i * x];
		i++;
	}
	return (tab);
}
