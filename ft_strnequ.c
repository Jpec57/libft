#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t k;

	k = 0;
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (s1[k] && s2[k] && k < n)
	{
		if (ft_strcmp(s1, s2) != 0)
			return (0);
		k++;
	}
	return (1);
}
