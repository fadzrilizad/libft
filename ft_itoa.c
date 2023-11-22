#include "libft.h"

static int	count_num(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		++i;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		++i;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*r;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	count = count_num(n);
	r = ft_calloc(count + 1, sizeof(char));
	if (r == NULL)
		return (NULL);
	if (n < 0)
	{
		r[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		--count;
		r[count] = (n % 10) + '0';
		n /= 10;
	}
	return (r);
}
