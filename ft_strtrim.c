#include "libft.h"

static int	char_in_set(char const c, char const *set)
{
	int	index;

	index = 0;
	while (set[index])
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int	i;
	int	start;
	int	k;
	char	*res;

	i = 0;
	k = 0;
	while (s[i] && (char_in_set(s[i], set) == 1))
		i++;
	start = i;
	i = (ft_strlen(s) - 1);
	while (s[i] && char_in_set(s[i], set))
		i--;
	res = malloc(sizeof(char) * (i - j + 1));
	if (!res)
		return (NULL);
	while (start <= i)
	{
		res[k] = s[start];
		start++;
		k++;
	}
	res[k] = '\0';
	return (res);
}
