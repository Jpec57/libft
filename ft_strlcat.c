#include "libft.h"

unsigned int		my_strlen(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

size_t				ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dstlen;
	size_t srclen;

	dstlen = my_strlen(dest);
	srclen = my_strlen((char*)src);
	i = dstlen;
	j = 0;
	if (size > 0)
	{
		while (src[j] && i < size - 1)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	if (size <= dstlen)
		return (srclen + size);
	return (dstlen + srclen);
}
