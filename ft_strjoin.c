#include "libft.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int	total_length;
	int	i;
	int	j;

	total_length = ft_strlen(s1) + ft_strlen(s2);
	res = malloc((sizeof(char) * total_length) + 1);
	i = 0;
	j = 0;
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		res[i] = s2[j];
		j++;
		i++;
	}
	res[i] = 0;
	return (res);
}
