#include <stdio.h>
#include <stdlib.h>

int	hcf(int a, int b)
{
	int	t;

	while (b != 0)
	{
		t = b;
		b = a % b;
		a = t;
	}
	return (a);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d", hcf(atoi(av[1]), atoi(av[2])));
	printf("\n");
	return (0);
}
