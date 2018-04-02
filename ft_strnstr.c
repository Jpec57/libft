#include "libft.h"

static size_t	seek(int i, const char *str, const char *to_find, size_t s)
{
	size_t j;
	size_t temp_i;

	j = 0;
	temp_i = i;
	while (to_find[j] == str[temp_i] && str[temp_i] != '\0' && temp_i < s)
	{
		temp_i++;
		j++;
	}
	return (j);
}

char			*ft_strnstr(const char *str, const char *to_find, size_t s)
{
	size_t	i;
	char	*n;

	n = NULL;
	i = 0;
	if (ft_strlen(to_find) == 0)
		return ((char*)str);
	if (ft_strlen(to_find) > ft_strlen(str))
		return (n);
	while (str[i] && i < s)
	{
		if (to_find[0] == str[i])
		{
			if (seek(i, str, to_find, s) == ft_strlen(to_find))
				return ((char*)str + i);
		}
		i++;
	}
	return (n);
}
