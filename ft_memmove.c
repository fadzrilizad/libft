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

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_ptr = (unsigned char *)dst;
	src_ptr = (const unsigned char *)src;
	if (dst_ptr > src_ptr && dst_ptr < src_ptr + len)
	{
		dst_ptr += len;
		src_ptr += len;
		while (len--)
			*(--dst_ptr) = *(--src_ptr);
	}
	else
	{
		ft_memcpy(dst_ptr, src_ptr, len);
	}
	return (dst);
}
