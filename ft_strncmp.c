/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:25:01 by nleempoe          #+#    #+#             */
/*   Updated: 2021/04/05 11:33:19 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (s1[c] && s2[c] && c < n && s1[c] == s2[c])
	{
		c++;
	}
	if (n > c)
		return (s1[c] - s2[c]);
	else
		return (0);
}
