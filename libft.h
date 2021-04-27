/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleempoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 11:17:02 by nleempoe          #+#    #+#             */
/*   Updated: 2021/04/27 04:23:39 by nleempoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_atoi(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t	ft_strlcat(char *dest, char *src, size_t size);
char	*ft_strnstr(const char *str, const char *word, size_t len);
void	*ft_memset(void *s, int o, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int cha, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *memb, int search, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	ft_bzero(void *s, size_t n);
char	*ft_strdup(const char *src);
void	*ft_calloc(size_t ecount, size_t esize);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
