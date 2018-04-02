#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *res;

	if ((res = malloc(size)) == NULL || size == 0)
		return (NULL);
	ft_bzero(res, size);
	return (res);
}
