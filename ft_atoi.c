/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:52:04 by nleempoe          #+#    #+#             */
/*   Updated: 2021/04/06 17:00:39 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	c;
	int	negatif;
	int	entier;

	c = 0;
	negatif = 1;
	entier = 0;
	while (str[c] == '\t' || str[c] == '\n' || str[c] == '\v'
		|| str[c] == '\f' || str[c] == '\r' || str[c] == ' ')
		c++;
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			negatif = negatif * -1;
		c++;
	}
	while (str[c] && (str[c] >= '0' && str[c] <= '9'))
	{
		entier = entier * 10 + str[c] - '0';
		c++;
	}
	return (entier * negatif);
}
