#include "libft.h"

int		ft_atoi(const char *str)
{
	long	res;
	int		signe;
	int		k;

	k = 0;
	signe = 1;
	res = 0;

	while (str[k] == '\t' || str[k] == '\n' || str[k] == '\r' ||
			str[k] == '\v' || str[k] == '\f' || str[k] == 32)
		k++;
	if (str[k] == '+' || str[k] == '-')
	{
		if (str[k] == '-')
			signe = -1;
		k++;
	}
	while (48 <= str[k] && str[k] <= 57)
	{
		res = res * 10 + (str[k] - 48);
		k++;
	}
	return ((int)(res * signe));
}
