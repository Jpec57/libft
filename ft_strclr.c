#include "libft.h"

void	ft_strclr(char *s)
{
	if (!s)
		return ;
	ft_memset(s, 0, ft_strlen(s));
}
