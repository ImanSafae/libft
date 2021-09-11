#include <stdlib.h>

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

static int	ft_strlen(char const *s)
{
	int	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int	i;
	int	j;
	int	k;
	char	*res;

	i = 0;
	k = 0;
	while (s[i] && (char_in_set(s[i], set) == 1))
		i++;
	j = i;
	i = (ft_strlen(s) - 1);
	while (s[i] && char_in_set(s[i], set))
		i--;
	res = malloc(sizeof(char) * (i - j + 1));
	if (!res)
		return (NULL);
	while (j <= i)
	{
		res[k] = s[j];
		j++;
		k++;
	}
	res[k] = '\0';
	return (res);
}
