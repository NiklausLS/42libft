/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 08:55:25 by nleempoe          #+#    #+#             */
/*   Updated: 2021/05/26 19:23:48 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;
	size_t	c;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	c = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (start < end && s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	ptr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!ptr)
		return (NULL);
	while (start < end)
		ptr[c++] = s1[start++];
	ptr[c] = '\0';
	return (ptr);
}
