/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:11:24 by nleempoe          #+#    #+#             */
/*   Updated: 2021/04/09 10:05:00 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	c;

	c = 0;
	while (dest[c] && c < size)
	{
		c++;
	}
	while (src[c] && c + 1 < size)
	{
		dest[c] = src[c];
		c++;
	}
	if (c != size)
	{
		dest[c] = '\0';
	}
	return (c + ft_strlen(src));
}
