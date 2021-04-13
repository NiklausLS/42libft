/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:52:50 by nleempoe          #+#    #+#             */
/*   Updated: 2021/04/10 11:28:00 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{
	char test [] = "abcsabcsabc";
	char aest [] = "aest";
	unsigned int num = 2;
	int s = 's';
	int c = 'a';
	int d = '0';
	int e = '$';
	int maj = 'Z';

	char dest [10] = "abcde";
	char src [] = "blabla";
	unsigned int size = 0;
	size_t sizeuh = 0;
	const char *grand = "aa bb cc";
	const char *petit  = "bb";
	size_t ltest = 7;
	char *ptr;

	ptr = strnstr(grand, petit, ltest);

	printf("STRLEN =  %d\n", ft_strlen(test)); 
	printf("\nISALPHA : a donne %d et ", ft_isalpha(c));
	printf("5 donne %d\n", ft_isalpha(d));

	printf("ISDIGIT : a donne %d et ", ft_isdigit(c));
	printf("5 donne %d\n", ft_isdigit(d));

	printf("ISALNUM : a donne %d, ", ft_isalnum(c));
	printf("5 donne %d et ", ft_isalnum(d));
	printf("$ donne %d\n", ft_isalnum(e));

	printf("\nTOUPPER : a devient %c\n", ft_toupper(c));

	printf("\nTOLOWER : Z devient %c\n", ft_tolower(maj));

	printf("\nSTRNCMP : test et aest = %d", ft_strncmp(test, aest, num));

	printf("\nSTRCHR : %s", ft_strchr(test, s));

	printf("\nSTRRCHR : %s", ft_strrchr(test, s));

	printf("\nSTRLCPY\n");
	printf("Vraie fonction renvoie : %lu\n", strlcpy(dest, src, 7));
	printf("Ma fonction renvoie : %u\n", ft_strlcpy(dest, src, size));

	printf("\nSTRLCAT\n");
	
	printf("Vraie renvoie : %lu\n", strlcat(dest, src, 0));
	printf("Ma fonction renvoie : %lu\n", ft_strlcat(dest, src, size));

	printf("STRNSTR\n");
	printf("%s\n", ptr);
}
