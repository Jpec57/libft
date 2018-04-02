#include "libft.h"

static int			size_nb(int n)
{
	int		k;

	k = 0;
	if (n < 0)
	{
		n = -n;
		k++;
	}
	while (n > 0)
	{
		n = n / 10;
		k++;
	}
	return (k);
}

static char			*special_cases(int n)
{
	char	*res;

	if (n == 0)
		res = ft_strdup("0");
	else
		res = ft_strdup("-2147483648");
	return (res);
}

char				*ft_itoa(int n)
{
	char	*res;
	int		size;
	int		k;

	k = 0;
	if (n == -2147483648 || n == 0)
		return (special_cases(n));
	size = size_nb(n);
	if ((res = malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	res[size] = '\0';
	if (n < 0)
	{
		n = -n;
		res[0] = '-';
	}
	while (n > 0)
	{
		res[size - 1 - k] = n % 10 + 48;
		n = n / 10;
		k++;
	}
	return (res);
}
