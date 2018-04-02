#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	*str;
	int		k;

	k = 0;
	str = (char*)s;
	while (str[k])
	{
		if (str[k] == (char)c)
			return ((char*)str + k);
		k++;
	}
	if (c == 0)
		return ((char*)str + k);
	return (NULL);
}
