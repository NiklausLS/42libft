/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 10:05:12 by nleempoe          #+#    #+#             */
/*   Updated: 2021/04/29 01:11:51 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *word, size_t n)
{
	size_t	nword;

	if (*word == '\0')
		return ((char *)str);
	nword = ft_strlen(word);
	while (*str != '\0' && nword <= n--)
	{
		if (*str == *word && (0 == strncmp(str, word, nword)))
			return ((char *)str);
		str++;
	}
	return (NULL);
}
