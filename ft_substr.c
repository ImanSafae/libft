#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char  *ft_substr(char const *s, unsigned int start, size_t len)
{
  int   i;
  char  *str;
  
  i = 0;
  str = malloc(len * sizeof(char));
  while (i < (len - 1))
  {
   str[i] = s[(start + i)];
   i++;
  }
  str[i] = '\0';
  return (str);
}
