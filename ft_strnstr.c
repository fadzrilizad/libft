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
	size_t	needle_l;
	int		same_word;

	needle_l = ft_strlen(needle);
	if (haystack == NULL && len == 0)
		return (NULL);
	if (needle_l == 0)
		return ((char *)haystack);
	while (*haystack && needle_l <= len)
	{
		same_word = ft_strncmp(haystack, needle, needle_l) == 0;
		if (*haystack == *needle && same_word)
			return ((char *)haystack);
		++haystack;
		--len;
	}
	return (NULL);
}
