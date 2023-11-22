#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = *lst;
		*lst = new;
		new->next = temp;
	}
}
