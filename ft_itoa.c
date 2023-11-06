/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:52:29 by fizad             #+#    #+#             */
/*   Updated: 2023/11/06 15:52:36 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_length(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		num_length;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	num_length = ft_num_length(n);
	r = (char *)malloc(sizeof(char) * (num_length + 1));
	if (r == NULL)
		return (NULL);
	if (n < 0)
	{
		r[0] = '-';
		n *= -1;
	}
	r[num_length] = '\0';
	while (n > 0)
	{
		--num_length;
		r[num_length] = n % 10 + '0';
		n /= 10;
	}
	return (r);
}
