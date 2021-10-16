#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	tab[3];

	tab[0] = 0;
	tab[1] = 0;
	tab[2] = 0;
	if (!needle[tab[1]])
		return ((char *)haystack);
	while ((tab[0] < n) && haystack[tab[0]])
	{
		if (needle[tab[1]] == haystack[tab[0]])
		{
			tab[2] = tab[0];
			while (haystack[tab[0]] && needle[tab[1]] && (haystack[tab[0]] == needle[tab[1]]))
			{
				tab[0]++;
				tab[1]++;
			}
		}
		if (!needle[tab[1]])
			return ((char *)haystack + tab[2]);
		tab[1] = 0;
		tab[0]++;
	}
	return (NULL);
}
