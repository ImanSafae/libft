#include "libft.h"
 
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

         i = 0;
	 if (ft_strlen(&s[start]) < len)
		 len = ft_strlen(&s[start]);
         if (start > ft_strlen(s))
                 return (NULL);
         str = malloc((len + 1) * sizeof(char));
         if (!str)
                 return (NULL);
         while (i < len)
         {
                 str[i] = s[(start + i)];
                 i++;
         }
         str[i] = '\0';
         return (str);
 }
