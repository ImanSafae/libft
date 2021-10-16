#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*pointer;

	if (!lst)
		return (NULL);
	pointer = lst->next;
	while (pointer->next != NULL)
	{
		pointer = pointer->next;
	}
	return (pointer);
}
