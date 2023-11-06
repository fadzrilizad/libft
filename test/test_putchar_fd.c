/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:57:00 by fizad             #+#    #+#             */
/*   Updated: 2023/11/06 18:57:02 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// c character of input
// fd file decryptor on which to write
// output character c will given to descriptor

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
