/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:08:50 by fizad             #+#    #+#             */
/*   Updated: 2023/10/26 13:08:51 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		p;
	int		r;
	int		i;
	char	*non;

	p = 1;
	r = 0;
	i = 0;
	non = " \n\t\v\f\r";
	while (ft_strchr(non, str[i]))
		i++;
	while (ft_strchr("+-", str[i]))
	{
		if (str[i] == '-')
			p = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		r = (r * 10) + (str[i] - '0');
		i++;
	}
	return (r * p);
}
