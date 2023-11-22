#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*node;

	if (lst == NULL || del == NULL)
		return ;
	node = *lst;
	while (node)
	{
		temp = node;
		node = node->next;
		del(temp->content);
		free(temp);
	}
	*lst = node;
}
