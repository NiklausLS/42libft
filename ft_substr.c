/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:59:57 by nleempoe          #+#    #+#             */
/*   Updated: 2021/05/14 02:12:38 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		c;
	size_t		min;
	char		*str;

	c = 0;
	min = ft_strlen(s);
	if (!s || start >= ft_strlen(s) || len <= 0)
		return (ft_strdup(""));
	if (min < len)
		len = min;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
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
