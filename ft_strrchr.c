/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:29:03 by nleempoe          #+#    #+#             */
/*   Updated: 2021/04/05 11:23:18 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		t;
	char	*r;

	r = (char *)s;
	t = ft_strlen(r);
	while (t > 0)
	{
		if (s[t] == (char)c)
		{
			return (&r[t]);
		}	
		t--;
	}
	return (NULL);
}
