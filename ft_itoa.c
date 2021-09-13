#include <stdlib.h>

static int	intlen(int n)
{
	int	count;
	int	tmp;

	count = 1;
	tmp = n;
	if (n < 0)
	{
		tmp = -n;
		count++;
	}
	while (tmp >= 10)
	{
		tmp = (tmp / 10);
		count++;
	}
	return (count);
}

char	*int_max_or_min(int n)
{
	if (n == -2147483648)
		return ("-2147483648");
	else if (n == 2147483647)
		return ("2147483647");
	else
		return (NULL);
}

char	*ft_itoa(int n)
{
	char	*res;
	int	i;

	if (n == -2147483648 || n == 2147483647)
		return (int_max_or_min(n));
	else if (n == 0)
		return ("0");
	res = malloc(sizeof(char) * (intlen(n) + 1));
	if (!res)
		return (NULL);
	i = intlen(n);
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	res[i] = '\0';
	i--;
	while (n > 0)
	{
		res[i] = (n % 10) + 48;
		i--;
		n = (n / 10);
	}
	return (res);
}
