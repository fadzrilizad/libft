#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (dstsize > 0)
	{
		i = 0;
		while (src[i] && dstsize > 1)
		{
			dst[i] = src[i];
			++i;
			--dstsize;
		}
		dst[i] = '\0';
	}
	return (len);
}
