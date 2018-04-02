#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t k;
	size_t j;

	k = 0;
	while (dest[k])
		k++;
	j = 0;
	while ((src[j] && j < nb) || (src[j] && (int)nb <= -1))
	{
		dest[k + j] = src[j];
		j++;
	}
	dest[k + j] = '\0';
	return (dest);
}
