/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:21:47 by fizad             #+#    #+#             */
/*   Updated: 2023/10/26 19:21:48 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char *src, char c)
{
	size_t	count;

	count = 0;
	while (*src)
	{
		while (*src == c)
			++src;
		if (*src && *src != c)
			++count;
		while (*src && *src != c)
			++src;
	}
	return (count);
}

static char	*ft_a_word(char *str, char c)
{
	size_t	count;
	char	*new_str;

	count = 0;
	while (str[count] && str[count] != c)
		++count;
	new_str = (char *)malloc(sizeof(char) * (count + 1));
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, str, count + 1);
	return (new_str);
}

char	**ft_split(const char *src, char c)
{
	char	**ptr;
	char	*str;
	size_t	total_word;
	size_t	i;

	if (src == NULL)
		return (NULL);
	str = (char *)src;
	total_word = count_word(str, c);
	ptr = (char **)malloc(sizeof(char *) * (total_word + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
			ptr[i++] = ft_a_word(str, c);
		while (*str && *str != c)
			str++;
	}
	ptr[i] = NULL;
	return (ptr);
}
