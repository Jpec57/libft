#include "libft.h"

void		*ft_memset(void *s, int c, size_t n)
{
	unsigned char *dst;

	dst = s;
	while (n--)
		*dst++ = (unsigned char)c;
	return (s);
}
