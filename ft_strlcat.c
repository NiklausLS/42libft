/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:11:24 by nleempoe          #+#    #+#             */
/*   Updated: 2021/04/28 05:53:41 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	c;
	size_t	c2;

	c = 0;
	c2 = 0;
	while (dest[c] && c < n)
	{
		c++;
	}
	while (src[c2] && c + c2 + 1 < n)
	{
		dest[c + c2] = src[c2];
		c2++;
	}
	if (c != n)
	{
		dest[c + c2] = '\0';
	}
	return (c + ft_strlen(src));
}
