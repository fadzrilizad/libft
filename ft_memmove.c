/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:08:23 by fizad             #+#    #+#             */
/*   Updated: 2023/10/17 16:08:24 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static void ft_revcpy(unsigned char *dst, const unsigned char *src, size_t len)
{
		while (len--)
			*(dst + len) = *(src + len);
}

static int ft_overlap(unsigned char *dst, const unsigned char *src, size_t len)
{
	if (dst > src && dst < src + len)
		return (1);
	if (src > dst && src < dst + len)
		return (1);
	return 0;
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	if (ft_overlap(dst, src, len))
		ft_revcpy(dst, src, len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}


// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	unsigned char		*dst_ptr;
// 	const unsigned char	*src_ptr;

// 	if (!dst && !src)
// 		return (NULL);
// 	dst_ptr = (unsigned char *)dst;
// 	src_ptr = (const unsigned char *)src;
// 	if (dst_ptr > src_ptr && dst_ptr < src_ptr + len)
// 		while (len--)
// 			*(dst_ptr + len) = *(src_ptr + len);
// 	else
// 		ft_memcpy(dst_ptr, src_ptr, len);
// 	return (dst);
// }
