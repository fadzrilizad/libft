#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*head;
	char	*tail;

	head = (char *)s;
	tail = head + ft_strlen(head);
	while (1)
	{
		if (*tail == (char)c)
			return ((char *)tail);
		if (head == tail)
			break ;
		--tail;
	}
	return (NULL);
}
