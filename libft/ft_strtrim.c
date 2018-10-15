/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:51:44 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 17:51:50 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ret;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	while (*s && ft_isspace(*s))
		s++;
	len = ft_strlen(s) == 0 ? 0 : ft_strlen(s) - 1;
	if (len > 0)
	{
		while (ft_isspace(s[len]))
			len--;
		len++;
	}
	if (!(ret = (char *)malloc(sizeof(*ret) * len + 1)))
		return (NULL);
	ret[len] = '\0';
	i = 0;
	while (len--)
		ret[i++] = *s++;
	return (ret);
}
