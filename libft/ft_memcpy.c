/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:17:12 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 17:17:18 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*str2;
	const char	*str1;

	str2 = dst;
	str1 = src;
	while (n > 0)
	{
		*str2++ = *str1++;
		n--;
	}
	return (dst);
}
