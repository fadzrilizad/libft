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

static int	ft_overlap(unsigned char *d, const unsigned char *s, size_t l)
{
	return ((d > s && d < s + l) || (s > d && s < d + l));
}

static void	ft_revcpy(unsigned char *d, const unsigned char *s, size_t l)
{
	while (l)
	{
		l--;
		*(d + l) = *(s + l);
	}
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
