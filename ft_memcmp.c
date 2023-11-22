#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (n)
	{
		if (*ss1 != *ss2)
			break ;
		++ss1;
		++ss2;
		--n;
	}
	if (n == 0)
		return (0);
	return ((int)(*ss1 - *ss2));
}
