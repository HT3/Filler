/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:27:02 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 17:27:10 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strappend(char *src, char c)
{
	char	*str;
	char	*itr;

	str = malloc(sizeof(char *) * (ft_strlen(src) + 2));
	if (str)
	{
		itr = ft_stpcpy(str, src);
		*itr++ = c;
		*itr = '\0';
		free(src);
	}
	return (str);
}
