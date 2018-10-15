/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdupc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:34:11 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 17:34:19 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdupc(const char *s, char c)
{
	char	*str;

	str = ft_strallocc(s, c);
	if (str)
		ft_stpcpyc(str, s, c);
	return (str);
}
