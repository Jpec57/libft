#include "libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			k;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	k = 0;
	while (k < n && s[k] != (unsigned char)c)
	{
		d[k] = s[k];
		k++;
	}
	if (k == n)
		return (NULL);
	if (s[k] == (unsigned char)c)
	{
		d[k] = s[k];
		k++;
	}
	return ((void*)(d + k));
}
