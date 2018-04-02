#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int size;
	int k;

	k = 0;
	if (!s || !f)
		return ;
	size = ft_strlen(s);
	while (k < size)
	{
		f(&(s[k]));
		k++;
	}
}
