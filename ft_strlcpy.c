/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 17:42:05 by nleempoe          #+#    #+#             */
/*   Updated: 2021/04/09 09:14:56 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;

	c = 0;
	while (src[c] && (c < size -1))
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (ft_strlen(src));
}
