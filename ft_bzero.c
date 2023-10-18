/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:38:18 by fizad             #+#    #+#             */
/*   Updated: 2023/10/17 13:38:21 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*byte_ptr;
	size_t			i;	

	if (s == NULL || s == 0)
		return ;
	byte_ptr = s;
	i = 0;
	while (i < n)
		byte_ptr[i++] = 0;
}
