/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:48:16 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 17:48:49 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int			found;
	int			i;
	int			j;
	int			k;
	const char	*h;

	i = -1;
	found = 1;
	h = big;
	if (!ft_strlen(little))
		return ((char *)h);
	while (*(h + ++i) && i < (int)len)
	{
		j = 0;
		if (*(h + i) == *little)
		{
			k = i;
			found = 1;
			while (*(little + j) && *(h + k) && j < (int)len && k < (int)len)
				found = (*(h + k++) == *(little + j++) ? 1 : 0);
			if (found && !*(little + j))
				return ((char *)(h + i));
		}
	}
	return (NULL);
}
