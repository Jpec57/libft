#include "libft.h"

char		*ft_strcat(char *dest, const char *src)
{
	int		k;
	int		j;

	k = 0;
	while (dest[k])
		k++;
	j = 0;
	while (src[j])
	{
		dest[k + j] = src[j];
		j++;
	}
	dest[k + j] = '\0';
	return (dest);
}
