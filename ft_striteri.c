/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:32:15 by fizad             #+#    #+#             */
/*   Updated: 2023/11/06 18:32:16 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	s_len;
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	s_len = ft_strlen(s);
	i = 0;
	while (i < s_len)
	{
		f(i, s);
		++s;
		++i;
	}
}
