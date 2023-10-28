/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:10:50 by fizad             #+#    #+#             */
/*   Updated: 2023/10/26 16:10:52 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_allocate_one(void)
{
	char	*sub;

	sub = malloc(1);
	if (!sub)
		return (NULL);
	*sub = '\0';
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*loop;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_allocate_one());
	if (len > ft_strlen (s + start))
		len = ft_strlen (s + start);
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	s += start;
	loop = substr;
	while (len && *s)
	{
		*loop++ = *s++;
		len--;
	}
	*loop = '\0';
	return (substr);
}
