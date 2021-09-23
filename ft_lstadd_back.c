#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
  t_list  pointer;
  
  pointer = alst->next;
  while (pointer != NULL)
  {
    pointer = pointer->next; 
  }
  pointer->next = new;
}
