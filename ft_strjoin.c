#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *res;
	int size;
	int k;
	int i;

	k = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	if ((res = malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	res[size] = '\0';
	while (s1[k])
	{
		res[k] = s1[k];
		k++;
	}
	i = 0;
	while (s2[i])
	{
		res[i + k] = s2[i];
		i++;
	}
	return (res);
}
