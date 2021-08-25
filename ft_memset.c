#include <stdio.h>

void	*ft_memset(void *dest, int src, size_t n)
{
	int 	i;
	unsigned char	*str;

	i = 0;
	*str = (unsigned char)src;
	while (i < n)
	{
		(unsigned char *)dest[i] = str[i];
		i++;
	}
	return (dest);
}
