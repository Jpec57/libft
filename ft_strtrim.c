#include "libft.h"

static int		is_another_word(char const *s, int k)
{
	while (s[k])
	{
		if (s[k] != ' ' && s[k] != '\n' && s[k] != '\t')
			return (1);
		k++;
	}
	return (0);
}

static int		ft_size_str(char const *s)
{
	int count;
	int k;

	k = 0;
	count = 0;
	while (s[k] == ' ' || s[k] == '\n' || s[k] == '\t')
		k++;
	while (s[k] && is_another_word(s, k))
	{
		count++;
		k++;
	}
	return (count);
}

char	*ft_strtrim(char const *s)
{
	int		size;
	char	*res;
	int		k;
	int		i;

	k = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	size = ft_size_str(s);
	if ((res = malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	res[size] = '\0';
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (k < size)
	{
		res[k] = s[i];
		i++;
		k++;
	}
	return (res);
}
