#include "libft.h"

char	*ft_strnstr(char *s1, char *s2, size_t n)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	if (!s2)
		return (s1);
	while ((i < n) && s1)
	{
		if (s1[i] == s2[j])
		{
			k = i;
			while (s1[i] == s2[j])
			{
				i++;
				j++;
			}
		}
		if (!s2[j])
			return (s1 + k);
		j = 0;
		i++;
	}
	return (NULL);
}
