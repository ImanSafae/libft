#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list   *newlist;
	t_list   *i;
	int      lst_len;

	i = lst;
	lst_len = ft_lstsize(lst);
	newlist = malloc(sizeof(t_list) * lst_len);
	if (!newlist)
		return (NULL);
	while (i != NULL)
	{
		f(i->content);
		newlist->content = i->content;
		if (!newlist)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		newlist = newlist->next;
		i = i->next;
	}
	return (newlist);
}
