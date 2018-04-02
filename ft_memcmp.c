#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			k;

	k = 0;
	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	while (k < n)
	{
		if (s1[k] != s2[k])
			return (s1[k] - s2[k]);
		k++;
	}
	return (0);
}
