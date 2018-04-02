#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*res;

	if (len == 0 || s == NULL)
		return (NULL);
	if ((res = malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	res = ft_strncpy(res, &s[start], len);
	res[len] = '\0';
	return (res);
}
