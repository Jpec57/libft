#include "libft.h"

size_t			seek1(int i, const char *str, const char *to_find)
{
	size_t j;
	size_t temp_i;

	j = 0;
	temp_i = i;
	while (to_find[j] == str[temp_i] && str[temp_i] != '\0')
	{
		temp_i++;
		j++;
	}
	return (j);
}

char			*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	char	*n;


	n = NULL;
	i = 0;
	if (ft_strlen(to_find) == 0)
		return ((char*)str);
	if (ft_strlen(to_find) > ft_strlen(str))
		return (n);
	while (str[i])
	{
		if (to_find[0] == str[i])
		{
			if (seek1(i, str, to_find) == ft_strlen(to_find))
				return ((char*)str + i);
		}
		i++;
	}
	return (n);
}
