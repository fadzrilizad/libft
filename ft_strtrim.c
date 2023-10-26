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
	const char	*trim;
	size_t		i;
	size_t		len;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	trim = s1 + i;
	len = ft_strlen(trim);
	while (len && ft_strchr(set, trim[len]))
		len--;
	return (ft_substr(trim, 0, len + 1));
}
