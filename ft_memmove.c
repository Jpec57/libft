#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t k;
	unsigned char *dst;
	unsigned char *sc;

	k = 0;
	dst = (unsigned char *)dest;
	sc = (unsigned char *)src;
	if (dst > sc)
	{
		while (n > 0)
		{
			dst[n - 1] = sc[n - 1];
			n--;
		}
	}
	else
	{
		while (k < n)
		{
			dst[k] = sc[k];
			k++;
		}
	}
	return (dest);
}
