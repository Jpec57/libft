#include "libft.h"

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int k;

	k = 0;
	while (s1[k] && s1[k] == s2[k] && k < n)
		k++;
	return ((unsigned char)s1[k] - (unsigned char)s2[k]);
}
