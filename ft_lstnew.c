#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_el;

	if ((new_el = malloc(sizeof(*new_el))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		new_el->content = NULL;
		new_el->content_size = 0;
	}
	else
	{
		if ((new_el->content = malloc(content_size)) == NULL)
			return (NULL);
		new_el->content = ft_memcpy(new_el->content, content, content_size);
		new_el->content_size = content_size;
	}
	new_el->next = NULL;
	return (new_el);
}
