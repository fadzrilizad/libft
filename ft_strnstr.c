/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:13:44 by fizad             #+#    #+#             */
/*   Updated: 2023/10/24 17:13:45 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (!haystack && !len)
		return (NULL);
	if (!needle_len)
		return ((char *)haystack);
	while (*haystack && needle_len <= len)
	{
		if (*haystack == *needle && !(ft_strncmp(haystack, needle, needle_len)))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}