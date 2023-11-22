#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			++s;
		if (*s && *s != c)
		{
			++count;
			++s;
		}
		while (*s && *s != c)
			++s;
	}
	return (count);
}

static char	*a_string(const char *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		++i;
	str = ft_calloc(i + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s, i);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		count;
	int		i;

	count = count_word(s, c);
	ptr = (char **)ft_calloc(count + 1, sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			++s;
		if (*s && *s != c)
			ptr[i++] = a_string(s, c);
		while (*s && *s != c)
			++s;
	}
	return (ptr);
}
