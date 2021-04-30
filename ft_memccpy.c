/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:03:41 by nleempoe          #+#    #+#             */
/*   Updated: 2021/04/27 19:50:56 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int cha, size_t n)
{
	size_t	c;
	char	*s;
	char	*d;

	c = 0;
	s = (char *) src;
	d = (char *) dest;
	while (n > c)
	{
		d[c] = s[c];
		if (s[c] == (char)cha)
			return (dest + c + 1);
		c++;
	}
	return (NULL);
}
