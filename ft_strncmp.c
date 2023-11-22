#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n)
	{
		if (*s1 != *s2)
			break ;
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
		return (0);
	return ((int)((*s1) - (*s2)));
}
