#include "libft.h"

static int		ft_is_another_word(char const *s, char c, int k)
{
	while (s[k])
	{
		if (s[k] != c)
			return (1);
		k++;
	}
	return (0);
}

static int		size_word(char const *s, char c, int k)
{
	int size;

	size = 0;
	while (s[k] && s[k] != c)
	{
		k++;
		size++;
	}
	return (size);
}

static int		count_word(char const *s, char c)
{
	int		k;
	int		count;
	int		flag;

	count = 0;
	k = 0;
	while (s[k] == c)
		k++;
	while (s[k])
	{
		flag = 0;
		while (s[k] && ft_is_another_word(s, c, k) && s[k] != c)
		{
			flag = 1;
			k++;
		}
		while (s[k] && s[k] == c)
			k++;
		if (flag == 1)
			count++;
	}
	return (count);
}

static char		*word_filler(char const *s, char c, int *k)
{
	char	*word;
	int		s_word;
	int		i;

	s_word = size_word(s, c, *k);
	if ((word = malloc(sizeof(char) * (s_word + 1))) == NULL)
		return (NULL);
	i = 0;
	while (i < s_word)
	{
		word[i] = s[*k];
		(*k)++;
		i++;
	}
	word[s_word] = '\0';
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		s_tab;
	int		i;
	int		k;

	s_tab = count_word(s, c);
	if ((res = malloc(sizeof(char*) * (s_tab + 1))) == NULL)
		return (NULL);
	res[s_tab] = 0;
	i = 0;
	k = 0;
	while (k < s_tab)
	{
		while (s[i] == c)
			i++;
		res[k] = word_filler(s, c, &i);
		k++;
	}
	return (res);
}
