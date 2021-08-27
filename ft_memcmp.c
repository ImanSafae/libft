#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;
	char 	*n1;
	char	*n2;

	i = 0;
	n1 = (char *)s1;
	n2 = (char *)s2;

	while (i < n)
	{
		if (n1[i] != n2[i])
			return (n2[i] - n1[i]);
		i++;
	}
	return (0);
}
