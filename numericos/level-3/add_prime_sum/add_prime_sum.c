#include <unistd.h>

void	putnbr(int n)
{
	char	c;

	if (n >= 10)
		putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

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

int	is_prime(int n)
{
	int	i;

	if (n == 2)
		return (1);
		
	i = 2;
	while (i <= n / 2)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	aps(char *s)
{
	int	n, i, sum;

	n = ft_atoi(s);
	if (n < 0)
		return (0);
	sum = 0;
	i = 2;
	while (i <= n)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	return (sum);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		write(1, "0", 1);
	else
		putnbr(aps(av[1]));
	write(1, "\n", 1);
	return (0);
}
