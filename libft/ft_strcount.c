/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjones <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:30:15 by tjones            #+#    #+#             */
/*   Updated: 2018/08/07 17:30:16 by tjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strcount(char *s, char c)
{
	unsigned int	count;

	if (!*s)
		return (0);
	count = 0;
	if (*s != c)
		++count;
	while (*++s)
		if (*s == c && *(s - 1) != c)
			count++;
	return (count);
}
