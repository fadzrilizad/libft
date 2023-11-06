/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:05:29 by fizad             #+#    #+#             */
/*   Updated: 2023/11/06 19:05:33 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// s is string to iterate
// f function to apply to each character

// It passing it's index first argument
// Each character is pass to address to be modified if neccessary

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
