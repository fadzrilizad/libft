#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;

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
		if (node == NULL)
		{
			ft_lstclear (&head, del);
			return (NULL);
		}
		node = node->next;
		lst = lst->next;
	}
	node->next = NULL;
	return (head);
}
