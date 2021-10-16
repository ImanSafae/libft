#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!n || !dst[i] || !src)
		return (ft_strlen(src));
	while ((i < (n - 1)) && dst[i] && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}