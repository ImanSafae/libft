#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t n)
{
	int	i;

	i = 0;
	if (!n || !src[i] || !dest[i])
		return (ft_strlen(src));
	while ((i < (n - 1)) && dst[i] && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}
