#include "libft.h"

int		ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		return (c - 32);
	else
		return (c);
}