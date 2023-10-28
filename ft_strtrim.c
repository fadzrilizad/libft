/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:54:19 by fizad             #+#    #+#             */
/*   Updated: 2023/10/26 18:54:21 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*tail;
	size_t		len;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	tail = s1 + ft_strlen(s1);
	while (s1 != tail && ft_strchr(set, *(tail - 1)))
		tail--;
	len = tail - s1;
	return (ft_substr(s1, 0, len));
}
