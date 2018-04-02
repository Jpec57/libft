#include "libft.h"

char		*ft_strncat(char *dest, char *src, int nb)
{
	int k;
	int j;

	k = 0;
	while (dest[k])
		k++;
	j = 0;
	while ((src[j] && j < nb) || (src[j] && nb <= -1))
	{
		dest[k + j] = src[j];
		j++;
	}
	dest[k + j] = '\0';
	return (dest);
}
