#include <unistd.h>

int	ft_atoi(char *s)
{
	int	i, sign, res;

	i = 0;
	sign = 1;
	res = 0;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (res * sign);
}

void	print_hex(int n, char *base)
{
	if (n >= 16)
		print_hex(n / 16, base);
	write(1, &base[n % 16], 1);
}

int	main(int ac, char **av)
{
	int	n;

	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		if (n >= 0)
			print_hex(n, "0123456789abcdef");
	}
	write(1, "\n", 1);
	return (0);
}
