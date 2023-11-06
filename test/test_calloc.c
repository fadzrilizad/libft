/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:50:57 by fizad             #+#    #+#             */
/*   Updated: 2023/11/06 16:50:58 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <assert.h>

// return void pointer
// allocate enough memory for count
// count is object accourding to size (data type)
// allocate memory is filled by byte of zero

// step
// make sure memory is enough
// if Too big / overflow return (NULL)
// set all the object memory with 0

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;
	size_t	total_size;

	if (size != 0)
	{
		if (count >= SIZE_MAX / size)
			return (NULL);
	}
	total_size = count * size;
	dst = malloc(total_size);
	if (dst)
	{
		memset(dst, 0, total_size);
		return (dst);
	}
	else
	{
		free(dst);
		return (NULL);
	}
}

void	test_calloc(void)
{
	int		*int_array;
	void	*zero_bytes;
	int		i;

	int_array = ft_calloc(5, sizeof(int));
	i = 0;
	assert(int_array != NULL);
	while (i < 5)
	{
		assert(int_array[i] == 0);
		++i;
	}
	free(int_array);
	zero_bytes = ft_calloc(0, 0);
	assert(zero_bytes != NULL);
	free(zero_bytes);
}

int	main(void)
{
	test_calloc();
	printf("All tests passed.\n");
	return (0);
}
