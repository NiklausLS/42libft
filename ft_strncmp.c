/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:25:01 by nleempoe          #+#    #+#             */
/*   Updated: 2021/05/26 19:25:40 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	while (s1[c] && s2[c] && c < n && s1[c] == s2[c])
	{
		c++;
	}
	if (n > c)
		return ((unsigned char)s1[c] - (unsigned char)s2[c]);
	else
		return (0);
}
