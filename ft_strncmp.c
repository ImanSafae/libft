int	ft_strncmp(char *s1, char *s2, size_t n)
{
	int			i;
	unsigned char		n1;
	unsigned char		n2;

	i = 0;
	n1 = (unsigned char)s1[i];
	n2 = (unsigned char)s2[i];
	if (!n)
		return (0);
	while ((s1[i] || s2[i]) && (i < n))
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
