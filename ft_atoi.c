/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:52:04 by nleempoe          #+#    #+#             */
/*   Updated: 2021/04/27 19:43:43 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	c;
	int				neg;
	int				res;

	c = 0;
	neg = 1;
	res = 0;
	while (str[c] == ' ' || (str[c] >= '\t' && str[c] <= '\r'))
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			neg = -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = res * 10 + (str[c] - '0');
		c++;
	}
	return (res * neg);
}
