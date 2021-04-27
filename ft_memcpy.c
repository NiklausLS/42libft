/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 16:59:18 by nleempoe          #+#    #+#             */
/*   Updated: 2021/04/23 17:03:00 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		c;
	char	*s;
	char	*d;

	c = 0;
	s = (char *)src;
	d = (char *)dest;
	while (n > c)
	{
		d[c] = s[c];
		c++;
	}
	return (dest);
}
