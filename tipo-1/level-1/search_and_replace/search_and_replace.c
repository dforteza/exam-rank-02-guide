#include <unistd.h>

void	ft_search_and_replace(char *s, char a, char b)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == a)
			s[i] = b;
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 4 && !av[2][1] && !av[3][1])
		ft_search_and_replace(av[1], av[2][0], av[3][0]);
	write(1, "\n", 1);
	return (0);
}
