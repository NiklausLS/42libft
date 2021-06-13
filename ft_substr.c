/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:59:57 by nleempoe          #+#    #+#             */
/*   Updated: 2021/06/13 13:53:49 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		c;
	size_t		min;
	char		*str;

	if (!s || ft_strlen(s) < start)
		return (ft_strdup(""));
	min = ft_strlen(s + start);
	if (min < len)
		len = min;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	c = 0;
	if (start < ft_strlen(s))
	{
		while (s[start] && c < len)
		{
			str[c] = s[start + c];
			c++;
		}
	}
	str[c] = '\0';
	return (str);
}
