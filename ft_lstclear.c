/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:13:45 by fizad             #+#    #+#             */
/*   Updated: 2023/11/07 17:13:47 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*to_del;

	if (lst == NULL || del == NULL)
		return ;
	node = *lst;
	while (node)
	{
		to_del = node;
		node = node->next;
		del(to_del->content);
		free(to_del);
	}
	*lst = node;
}
