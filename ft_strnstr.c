/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 10:05:12 by nleempoe          #+#    #+#             */
/*   Updated: 2021/05/26 19:26:23 by nleempoe         ###   ########.fr       */
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
		if (*str == *word && (0 == ft_strncmp(str, word, nword)))
			return ((char *)str);
		str++;
	}
	return (NULL);
}
