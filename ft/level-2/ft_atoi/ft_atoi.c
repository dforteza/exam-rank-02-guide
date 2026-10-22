int	ft_atoi(const char *s)
{
	int		i;
	int		sign = 1;
	long	n = 0;

	i = 0;
	while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
		i++;
	
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		n = n * 10 + s[i] - '0';
		i++;
	}
	return (sign * n);
}
