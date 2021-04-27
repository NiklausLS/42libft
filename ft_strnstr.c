/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 10:05:12 by nleempoe          #+#    #+#             */
/*   Updated: 2021/04/24 10:46:10 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *str, const char *word, size_t len)
{
	size_t		cc;
	size_t		cm;

	cc = 0;
	if (word  == '\0')
		return ((char *)str);
	if (len == 0)
		return (NULL);
	while (str[cc] && cc < len)
	{
		cm = 0;
		while (str[cc] == word[cc + cm] && cc + cm < len)
		{
			if (word[cm + 1] == '\0')
			{
				return ((char *) word + cc);
			}
			cm++;
		}
		cc++;
	}
	return (0);	
}
