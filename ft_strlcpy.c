/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:42:05 by nleempoe          #+#    #+#             */
/*   Updated: 2021/05/11 04:50:45 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	c;
	size_t	sizend;

	c = 0;
	sizend = 0;
	if (!src)
		return (0);
	while ((char)src[sizend])
		sizend++;
	if (n == 0)
		return (sizend);
	while ((char)src[c] && (c < (n -1)))
	{
		dest[c] = (char)src[c];
		c++;
	}
	dest[c] = '\0';
	return (sizend);
}
