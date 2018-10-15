/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:45:55 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 17:46:19 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*s2;
	size_t	i;

	s2 = dst;
	i = -1;
	while (++i < len)
		if (*src)
			*s2++ = *src++;
		else
			while (i++ < len)
				*s2++ = '\0';
	return (dst);
}
