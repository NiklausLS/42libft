/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 04:26:55 by nleempoe          #+#    #+#             */
/*   Updated: 2021/05/11 05:32:04 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char	*dst;

	dst = (char *)malloc(sizeof(char) * n + 1);
	if (!dst)
		return (NULL);
	dst = ft_strncpy(dst, src, n);
	dst[n] = '\0';
	return (dst);
}
