#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len >= ft_strlen(&s[start]))
		len = ft_strlen(&s[start]);
	sub = ft_calloc(len + 1, sizeof(char));
	if (sub == NULL)
		return (NULL);
	ft_memcpy(sub, &s[start], len);
	return (sub);
}
