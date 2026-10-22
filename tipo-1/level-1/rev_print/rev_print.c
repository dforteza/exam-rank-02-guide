#include <unistd.h>

void	ft_rev_print(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i--)
		write(1, &s[i], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_rev_print(av[1]);
	write(1, "\n", 1);
	return (0);
}
