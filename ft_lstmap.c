/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:44:26 by fizad             #+#    #+#             */
/*   Updated: 2023/11/07 17:44:27 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*head;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	node = ft_lstnew(f(lst->content));
	if (node == NULL)
		return (NULL);
	head = node;
	lst = lst->next;
	while (lst)
	{
		node->next = ft_lstnew(f(lst->content));
		if (node->next == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		node = node->next;
		lst = lst->next;
	}
	node->next = NULL;
	return (head);
}
