#include <unistd.h>

void	putnbr(int n)
{
	char	c;

	if (n >= 10)
		putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i, cont;

	if (ac == 1)
		write(1, "0", 1);
	else
	{
		cont = 0;
		i = 1;
		while (av[i])
		{
			cont++;
			i++;
		}
		putnbr(cont);
	}
	write(1, "\n", 1);
	return (0);
}
