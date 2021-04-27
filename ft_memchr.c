/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:15:57 by nleempoe          #+#    #+#             */
/*   Updated: 2021/04/23 17:22:55 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memb, int search, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n)
	{
		if (((unsigned char *)memb)[c] == (unsigned char)search)
		{
			return (&((unsigned char *)memb)[c]);
		}
		c++;
	}
	return (NULL);
}
