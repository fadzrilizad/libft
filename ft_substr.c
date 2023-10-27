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

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*sub;
// 	char	*ptr_loc;

// 	ptr_loc = (char *)s + start;
// 	if (!s)
// 		return (NULL);
// 	if (start > (unsigned int)ft_strlen(s))
// 		len = 0;
// 	if (len >= (unsigned int)ft_strlen(ptr_loc))
// 		len = (unsigned int)ft_strlen(ptr_loc);
// 	sub = (char *)malloc(len + 1);
// 	if (!sub)
// 		return (NULL);
// 	ft_strlcpy(sub, (const char *)(ptr_loc), len + 1);
// 	return (sub);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*loop;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
	{
		substr = malloc(1);
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if(len > ft_strlen(s + start))
		len = ft_strlen(s + start);
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
	*loop= '\0';
	return (substr);
}
