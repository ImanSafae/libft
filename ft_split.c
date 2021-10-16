#include "libft.h"

static int	count_strings(char const *string, char sep)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (string[i])
	{
		if ((string[i] != sep) && (string[i + 1] == sep))
			count++;
		else if ((string[i] != sep) && (string[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static char	**malloc_tab(char **tab, const char *str, char sep, int n)
{
	int	i_tab;
	int	i_str;
	int	str_length;

	i_tab = 0;
	i_str = 0;
	str_length = 0;
	while ((i_tab < n) && str[i_str])
	{	
		while (str[i_str] && str[i_str] != sep)
		{
			str_length++;
			i_str++;
		}
		tab[i_tab] = malloc(sizeof(char) * (str_length + 1));
		i_tab++;
		str_length = 0;
		while (str[i_str] == sep)
			i_str++;
	}
	return (tab);
}

static char	**fill_tab(int nb_of_strings, char **tab, const char *s, char sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < nb_of_strings)
	{
		while (s[k] && s[k] != sep)
		{
			tab[i][j] = s[k];
			j++;
			k++;
		}
		tab[i][j] = '\0';
		while (s[k] == sep)
			k++;
		i++;
		j = 0;
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split(char const *s, char sep)
{
	int	i;
	int	j;
	int	k;
	char	**tab;
	int	nb_of_strings;

	i = 0;
	j = 0;
	k = 0;
	if (!s)
		return (NULL);
	nb_of_strings = count_strings(s, sep);
	s = ft_strtrim(s, &sep);
	tab = malloc(sizeof(char *) * (nb_of_strings + 1));
	if (!tab)
		return (NULL);
	tab = malloc_tab(tab, s, sep, nb_of_strings);
	tab = fill_tab(nb_of_strings, tab, s, sep);
	free((void *)s);
	return (tab);
}
//
// #include <string.h>
// int main(void)
// {
// 	char	*string = "      split       this for   me  !       ";
// 	char	**expected = ((char*[6]){"split", "this", "for", "me", "!", NULL});
// 	char	**result = ft_split(string, ' ');

// 	while (*result)
// 	{
// 		if (*expected == NULL || strcmp(*expected, *result))
// 			printf("diff avec [%s] et [%s]\n", *expected, *result);
// 		else
// 			printf("same\n");
// 		result++;
// 		expected++;
// 	}
// }