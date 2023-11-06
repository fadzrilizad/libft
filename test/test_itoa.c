/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:43:49 by fizad             #+#    #+#             */
/*   Updated: 2023/11/06 16:43:51 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// return string
// return NULL if allocate fail
// n is interger to convert
// use malloc to allocate memory
// negative number must be handle

// step
// know n length to malloc
// if number negative, add 1 memory to put '-'
// convert every number to char and allocate to string

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

	num_length = ft_num_length(n);
	r = (char *)malloc(sizeof(char) * num_length);
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

int	main(void)
{
	int		a;
	char	*r;

	a = -123432423;
	r = ft_itoa(a);
	printf("%s\n", r);
	free(r);
	return (0);
}
