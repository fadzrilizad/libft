/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 22:14:44 by fizad             #+#    #+#             */
/*   Updated: 2023/10/28 22:14:56 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wc(char *s, char c)
{
	size_t	wc;

	wc = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			wc++;
		while (*s && *s != c)
			s++;
	}
	return (wc);
}

static char	*ft_strdup_d(const char *src, char c)
{
	char	*src_head;
	char	*ptr;
	size_t	len;

	src_head = (char *)src;
	while (*src && *src != c)
		src++;
	len = src - src_head;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, src_head, len + 1);
	return (ptr);
}

char	**ft_split(const char *src, char c)
{
	char	**ptr;
	char	*str;
	size_t	wc;
	size_t	i;

	str = (char *)src;
	i = 0;
	if (!src)
		return (NULL);
	wc = ft_wc(str, c);
	ptr = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!ptr)
		return (NULL);
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
			ptr[i++] = ft_strdup_d(str, c);
		while (*str && *str != c)
			str++;
	}
	ptr[i] = NULL;
	return (ptr);
}
