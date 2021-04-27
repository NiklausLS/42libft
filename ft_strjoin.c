/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 04:37:48 by nleempoe          #+#    #+#             */
/*   Updated: 2021/04/27 11:57:23 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	c;
	size_t	c2;
	size_t add;
	char	*fin;

	c = 0;
	c2 = 0;
	add = ft_strlen(s1) + ft_strlen(s2) + 1;
	fin = (char *) malloc(add);

	if (add == 1)
		return (NULL);
	if (fin == NULL)
		return (NULL);


}
