#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*tail;
	size_t		sub_len;

	while (*s1 && ft_strchr(set, *s1))
		++s1;
	tail = s1 + ft_strlen(s1);
	while (s1 != tail)
	{
		if (ft_strchr(set, *(tail - 1)))
			--tail;
		else
			break ;
	}
	sub_len = tail - s1;
	return (ft_substr(s1, 0, sub_len));
}
