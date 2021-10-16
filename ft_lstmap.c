#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*i;
	t_list	*element;

	i = lst;
	newlist = NULL;
	while (i != NULL)
	{
		element = ft_lstnew(f(i->content));
		if (!element)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, element);
		i = i->next;
	}
	return (newlist);
}