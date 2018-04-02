#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	k;

	k = 0;
	while (s1[k] && s1[k] == s2[k] && k < n)
		k++;
	if (k == n)
		return (0);
	if (s1[k] && s2[k])
		return ((unsigned char)s1[k] - (unsigned char)s2[k]);
	if (s1[k])
		return ((unsigned char)s1[k]);
	if (s2[k])
		return (-(unsigned char)s2[k]);
	return (0);
}
