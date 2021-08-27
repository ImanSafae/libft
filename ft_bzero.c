#include <stdio.h>

void	bzero(void *s, size_t n)
{
	char	*str;
	int	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
