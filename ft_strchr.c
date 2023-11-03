/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:21:15 by fizad             #+#    #+#             */
/*   Updated: 2023/10/19 17:21:18 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*str)
	{
		if ((char)*str == (char)c)
			return ((char *)str);
		++str;
	}
	if ((char)*str == (char)c)
		return ((char *)str);
	return (NULL);
}
