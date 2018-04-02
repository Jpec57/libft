#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newLst;
	t_list *newElem;
	t_list *tmp;
	t_list *start;

	tmp = lst;
	if (tmp != NULL)
	{
		newLst = f(tmp);
		start = newLst;
		tmp = tmp->next;
	}
	while (tmp)
	{
		newElem = f(tmp);
		newLst->next = newElem;
		newLst = newLst->next;
		tmp = tmp->next;
	}
	return (start);
}
