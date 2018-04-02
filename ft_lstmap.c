#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_lst;
	t_list *new_elem;
	t_list *tmp;
	t_list *start;

	tmp = lst;
	if (tmp != NULL)
	{
		new_lst = f(tmp);
		start = new_lst;
		tmp = tmp->next;
	}
	while (tmp)
	{
		new_elem = f(tmp);
		new_lst->next = new_elem;
		new_lst = new_lst->next;
		tmp = tmp->next;
	}
	return (start);
}
