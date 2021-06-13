/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 00:58:53 by nleempoe          #+#    #+#             */
/*   Updated: 2021/05/27 09:11:29 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcount(char const *s, char c)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		w;

	i = 0;
	w = 0;
	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_strcount(s, c)) + 1);
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			tab[w++] = ft_strndup(s + j, i - j);
	}
	tab[w] = NULL;
	return (tab);
}
