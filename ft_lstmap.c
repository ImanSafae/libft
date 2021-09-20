t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(*void))
{
   t_list   *newlist;
   t_list   *i;
   t_list   *j;
   int      lst_len;
   
   i = lst;
   lst_len = ft_lstsize(lst);
   newlist = malloc(sizeof(t_list) * lst_len);
   if (!newlist)
      return (NULL);
   j = newlist;
   while (i != NULL)
   {
      f(i->content);
      j->content = i->content;
      j = j->next;
      i = i->next;
   }
   return (newlist);
}
