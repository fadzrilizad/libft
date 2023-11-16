/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:57:15 by fizad             #+#    #+#             */
/*   Updated: 2023/10/17 18:57:16 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	i;

	if ((src == NULL || dst == NULL) && dstsize == 0)
		return (0);
	dst_len = ft_strlen(dst);
	if (dst_len > dstsize)
		return (dstsize + ft_strlen(src));
	i = dst_len;
	while (*src && dst_len + 1 < dstsize)
	{
		dst[i] = *src;
		++src;
		++i;
		++dst_len;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
