#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int k;

	k = 0;
	while (s1[k] && s1[k] == s2[k])
		k++;
	if (s1[k] && s2[k])
		return ((unsigned char)s1[k] - (unsigned char)s2[k]);
	if (s1[k])
		return ((unsigned char)s1[k]);
	if (s2[k])
		return (-(unsigned char)s2[k]);
	return (0);
}
