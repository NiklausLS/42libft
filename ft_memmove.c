/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:08:56 by nleempoe          #+#    #+#             */
/*   Updated: 2021/05/25 19:05:00 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	c;
	char	*s;
	char	*d;

	if (!dest && ! src)
		return (NULL);
	c = 0;
	s = (char *)src;
	d = (char *)dest;
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		while (n > c)
		{
			d[c] = s[c];
			c++;
		}
	}
	return (dest);
}
