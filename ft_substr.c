/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:59:57 by nleempoe          #+#    #+#             */
/*   Updated: 2021/04/27 04:37:21 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	c;
	size_t	c2;
	char	*str;

	c = 0;
	c2 = 0;
	str = (char *)malloc(sizeof(*s) * len + 1);
	while (s[c])
	{
		if (c >= start && c2 < len)
		{
			str[c2] = s[c];
			c2++;
		}
		c++;
	}
	str[c2] = '\0';
	return (str);
}
