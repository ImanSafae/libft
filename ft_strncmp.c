#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char		n1;
	unsigned char		n2;

	i = 0;
	n1 = (unsigned char)s1[i];
	n2 = (unsigned char)s2[i];
	if (!n)
		return (0);
	if (n < 0)
		return (0);
	while ((s1[i] && s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
		{
			n1 = (unsigned char)s1[i];
			n2 = (unsigned char)s2[i];
			return (n1 - n2);
		}
		i++;
	}
	return (0);
}
