#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t size;
	size_t k;
	char *res;

	k = 0;
	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	if ((res = malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	while (k < size)
	{
		res[k] = f(k, s[k]);
		k++;
	}
	res[size] = '\0';
	return (res);
}
