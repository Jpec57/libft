#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t k;

	k = 0;
	if (n == 0)
		return (1);
	if ((!s1) || (!s2))
		return (0);
	if (ft_strlen(s1) == ft_strlen(s2) && ft_strlen(s1) == 0)
		return (1);
	while ((s1[k] || s2[k]) && k < n)
	{
		if (s1[k] != s2[k])
			return (0);
		k++;
	}
	return (1);
}
