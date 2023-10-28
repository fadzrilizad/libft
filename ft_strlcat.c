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

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	char	*dst_tail;

	dst_len = ft_strlen(dst);
	if ((!dst || !src) && !dstsize)
		return (0);
	if (dst_len > dstsize)
		return (dstsize + ft_strlen(src));
	dst_tail = dst + dst_len;
	while (*src && dst_len + 1 < dstsize)
	{
		*dst_tail++ = *src++;
		dst_len++;
	}
	*dst_tail = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
