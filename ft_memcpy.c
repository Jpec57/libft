#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *dst;
	const unsigned char *s;

	dst = dest;
	s = src;
	while (n--)
		*dst++ = *s++;
	return (dest);
}
