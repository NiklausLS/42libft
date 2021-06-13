/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 09:08:39 by nleempoe          #+#    #+#             */
/*   Updated: 2021/05/27 09:10:58 by nleempoe         ###   ########.fr       */
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
