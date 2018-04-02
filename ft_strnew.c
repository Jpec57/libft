#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *res;

	if ((res = malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	res[size] = '\0';
	while (size--)
		res[size] = '\0';
	return (res);
}
