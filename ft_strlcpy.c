/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:39:54 by fizad             #+#    #+#             */
/*   Updated: 2023/10/17 16:39:57 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (dstsize > 1 && *src)
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = '\0';
	return (len);
}
