#include <stdio.h>
#include <stdlib.h>

void	ft_do_op(int a, char op, int b)
{
	if (op == '+')
		printf("%d", a + b);
	else if (op == '-')
		printf("%d", a - b);
	else if (op == '*')
		printf("%d", a * b);
	else if (op == '/')
		printf("%d", a / b);
	else if (op == '%')
		printf("%d", a % b);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		ft_do_op(atoi(av[1]), av[2][0], atoi(av[3]));
	printf("\n");
	return (0);
}


