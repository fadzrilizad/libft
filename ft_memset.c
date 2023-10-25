/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:44:30 by fizad             #+#    #+#             */
/*   Updated: 2023/10/17 12:44:31 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*byte_ptr;
	size_t			i;

	byte_ptr = b;
	i = 0;
	while (i < len)
	{
		byte_ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
