#include <stddef.h>
#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	int	dst_len;
	int	to_append;
	int	i;
	int	j;

	dst_len = ft_strlen(dst);
	to_append = size - dst_len - 1;
	i = 0;
	j = 0;
	if ((size == 0) || (size < dst_len))
		return (size);
	while (dst[i])
		i++;
	while ((j < to_append) || src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return ((size_t)(dst_len + ft_strlen(src)));
}
