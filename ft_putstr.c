#include "libft.h"

void		ft_putstr(const char *s)
{
	int k;

	k = 0;
	if (s == NULL)
		return ;
	while (s[k])
	{
		ft_putchar(s[k]);
		k++;
	}
}
