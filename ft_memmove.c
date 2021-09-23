#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;
	char	*dest;
	char	*source;

	i = 0;
	dest = (char *)dst;
	source = (char *)src;
	if (dest > source)
	{
		while (i < len)
		{
			dest[len - i - 1] = source[len - i - 1];
			i++;
		}
	}
	else if (source > dest)
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dst);
}
