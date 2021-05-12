/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:59:57 by nleempoe          #+#    #+#             */
/*   Updated: 2021/05/12 04:06:29 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		c;
	char		*str;

	c = 0;
	if (!s || len <= 0 || start > ft_strlen(s))
		return (ft_strdup(""));
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (c < len && s[start])
		{
			str[c] = s[start];
			c++;
			start++;
		}
	}
	str[c] = '\0';
	return (str);
}
