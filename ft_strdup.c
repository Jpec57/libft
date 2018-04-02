#include "libft.h"

char		*ft_strdup(const char *src)
{
	char	*str;
	int		k;

	str = (char *)malloc(sizeof(*str) * (ft_strlen(src) + 1));
	if (str == NULL)
		return (NULL);
	k = 0;
	while (src[k])
	{
		str[k] = src[k];
		k++;
	}
	str[k] = '\0';
	return (str);
}
