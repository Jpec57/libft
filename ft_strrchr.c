#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		k;

	str = NULL;
	k = 0;
	while (s[k])
	{
		if (s[k] == (char)c)
			str = (char*)s + k;
		k++;
	}
	if (c == 0)
		return ((char*)s + k);
	return (str);
}
