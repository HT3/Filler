/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:51:05 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 17:51:11 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		found;
	int		i;
	int		j;
	int		k;

	i = -1;
	found = 0;
	if (!ft_strlen(needle))
		return ((char *)haystack);
	while (*(haystack + ++i) && !found)
	{
		if (*(haystack + i) == *needle)
		{
			j = 0;
			k = i;
			found = 1;
			while (*(needle + j))
				if (*(haystack + k++) != *(needle + j++))
					found = 0;
			if (found)
				return ((char *)(haystack + i));
		}
	}
	return (NULL);
}
