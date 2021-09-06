#include "libft.h"
#include <stdlib.h>

static int ft_strlen(char *str)
{
  int i;
  
  i = 0;
  while (str[i])
    i++;
  return (i);
}

char  *ft_strdup(const char *s)
{
  char *res;
  int len_s;
  int i;
  
  i = 0;
  len_s = ft_strlen(s);
  res = malloc((sizeof(char) * len_s) + 1);
  while (s[i])
  {
    res[i] = s[i];
    i++;
  }
  res[i] = '\0';
  return (res);
}
