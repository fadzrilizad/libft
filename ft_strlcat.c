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
	size_t	src_len;
	size_t	dst_len;
	size_t	spc_avl;
	size_t	i;

	if (dst == NULL || src == NULL)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	spc_avl = 0;
	if (dstsize > dst_len)
		spc_avl = dstsize - dst_len - 1;
	if (spc_avl)
	{
		while (*src && i < spc_avl)
		{
			dst[dst_len + i] = *src++;
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (src_len + dst_len);
}
