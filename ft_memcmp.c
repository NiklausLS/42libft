/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:23:17 by nleempoe          #+#    #+#             */
/*   Updated: 2021/04/27 16:18:05 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			c;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	c = 0;
	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	while (c < n)
	{
		if (ptr1[c] != ptr2[c])
			return (ptr1[c] - ptr2[c]);
		c++;
	}
	return (0);
}
