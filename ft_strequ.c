#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int k;

	k = 0;
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (s1[k])
	{
		if (ft_strcmp(s1, s2) != 0)
			return (0);
		k++;
	}
	return (1);
}
