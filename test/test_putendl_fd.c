/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putendl_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:34:14 by fizad             #+#    #+#             */
/*   Updated: 2023/11/06 19:34:15 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// s string of output
// fd file descriptor

// output string follow by new line

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		++s;
	}
	write (fd, "\n", 1);
}
