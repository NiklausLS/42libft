/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 04:37:48 by nleempoe          #+#    #+#             */
/*   Updated: 2021/05/25 19:46:43 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	char	*destinit;

	if (!s1 || !s2)
		return (NULL);
	dest = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dest)
		return (NULL);
	destinit = dest;
	while (*s1)
		*dest++ = *s1++;
	while (*s2)
		*dest++ = *s2++;
	*dest = '\0';
	return (destinit);
}
