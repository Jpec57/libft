#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t				k;

	str = (unsigned char*)s;
	k = 0;
	while (k < n)
	{
		if (*str != (unsigned char)c)
			str++;
		else
			return ((void*)str);
		k++;
	}
	return (NULL);
}
