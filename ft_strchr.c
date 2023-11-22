#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)(str));
		++str;
	}
	if (c == 0)
		return (str);
	return (NULL);
}
