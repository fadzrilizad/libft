/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:39:18 by fizad             #+#    #+#             */
/*   Updated: 2023/10/26 15:39:19 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	len;

	len = ft_strlen(s1);
	dst = (char *)malloc(sizeof(char) * len + 1);
	if (!dst)
		return (NULL);
	ft_memcpy(dst, s1, len);
	*(dst + len) = '\0';
	return (dst);
}
