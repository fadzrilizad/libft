/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:10:10 by fizad             #+#    #+#             */
/*   Updated: 2023/10/19 18:10:12 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*head;
	const char	*tail;

	head = s;
	tail = s + ft_strlen(s);
	while (1)
	{
		if (*tail == (unsigned char)c)
			return ((char *)(tail));
		if (tail == head)
			break ;
		--tail;
	}
	return (NULL);
}
