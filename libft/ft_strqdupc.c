/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strqdupc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:49:03 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 17:49:09 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strqdupc(const char **s1, char c)
{
	char	*str;

	str = ft_strallocc(*s1, c);
	if (str)
		*s1 = ft_stpcpyc(str, *s1, c);
	return (str);
}
