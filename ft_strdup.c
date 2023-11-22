#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	count;
	char	*new_str;

	count = ft_strlen(s);
	new_str = ft_calloc(count + 1, sizeof(char));
	if (new_str == NULL)
		return (NULL);
	ft_memcpy(new_str, s, count);
	return (new_str);
}
