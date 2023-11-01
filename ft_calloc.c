/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:42:14 by fizad             #+#    #+#             */
/*   Updated: 2023/10/26 14:42:15 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;
	size_t	total_size;

	if (size != 0)
	{
		if (count >= SIZE_MAX / size)
			return (NULL);
	}
	total_size = count * size;
	dst = malloc(total_size);
	if (dst == NULL)
		return (NULL);
	ft_bzero(dst, total_size);
	return (dst);
}
