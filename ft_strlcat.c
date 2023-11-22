#include "libft.h" 

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;

	if ((src == NULL || dst == NULL) && dstsize == 0)
		return (0);
	dst_len = ft_strlen(dst);
	if (dst_len > dstsize)
		return (dstsize + ft_strlen(src));
	while (*src)
	{
		if (dst_len + 1 < dstsize)
			dst[dst_len++] = *src++;
		else
			break ;
	}
	dst[dst_len] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
