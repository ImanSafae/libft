#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int	i;
	int	len_s;

	i = 0;
	len_s = ft_strlen(s);
	res = malloc((sizeof(char) * len_s) + 1);
	if (!res || !s)
		return (0);
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
