#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	if (size != 0)
		if (SIZE_MAX / size <= count)
			return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		ft_bzero(ptr, count * size);
		return (ptr);
	}
}
