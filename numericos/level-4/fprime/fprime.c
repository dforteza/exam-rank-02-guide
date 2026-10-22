#include <stdio.h>
#include <stdlib.h>

void	fprime(int n)
{
	int	i;

	if (n == 1)
	{
		printf("1");
		return ;
	}
	i = 2;
	while (n != 1)
	{
		if (n % i == 0)
		{
			printf("%d", i);
			n /= i;
			if (n != 1)
				printf("*");
		}
		else
			i++;
	}
}

int	main(int ac, char **av)
{
	int	n;

	if (ac == 2)
	{
		n = atoi(av[1]);
		if (n > 0)
			fprime(n);
	}
	printf("\n");
	return (0);
}
