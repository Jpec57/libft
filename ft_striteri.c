#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	size_t size;
	size_t k;

	k = 0;
	if (!s || !f)
		return ;
	size = ft_strlen(s);
	while (k < size)
	{
		f(k, &(s[k]));
		k++;
	}
}
