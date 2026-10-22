int	ft_atoi_base(const char *s, int str_base)
{
	int	i, c, res, sign;

	i = 0;
	res = 0;
	sign = 1;

	// 1- Caso Negativo
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}

	// 2- Recorrer s
	while (s[i])
	{
		// 2.1- Asignar c
		if (s[i] >= '0' && s[i] <= '9')
			c = s[i] - '0';
		else if (s[i] >= 'a' && s[i] <= 'f')
			c = (s[i] - 'a') + 10;
		else if (s[i] >= 'A' && s[i] <= 'F')
			c = (s[i] - 'A') + 10;
		else
			break ;
		// 2.2- Error de exceso
		if (c >= str_base)
			break ;
		// 2.3- Reasignar res
		res = res * str_base + c;
		i++;
	}
	return (res * sign);
}
