#include <stdlib.h>

char	*ft_itoa(int n)
{
	int	count;
	int	tmp;
	char	*res;
	int	i;

	count = 1;

	if (n < 0)
	{
		n = -n;
		count++;
		res[0] = '-';
	}
	tmp = n;
	while (tmp >= 10)
	{
		tmp = (tmp / 10);
		count++;
	}
	res = malloc(sizeof(char) * (count + 1));
	i = count;
	res[i] = '\0';
	while (n > 0)
	{
		res[i] = (n % 10) + 48;
		i--;
		n = (n / 10);
	}
	return (res);
}
