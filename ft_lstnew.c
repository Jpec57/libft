#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newEl;

	if ((newEl = malloc(sizeof(*newEl))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		newEl->content = NULL;
		newEl->content_size = 0;
	}
	else
	{
		if ((newEl->content = malloc(content_size)) == NULL)
			return (NULL);
		newEl->content = ft_memcpy(newEl->content, content, content_size);
		newEl->content_size = content_size;
	}
	newEl->next = NULL;
	return (newEl);
}
