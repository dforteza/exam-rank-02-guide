#include <unistd.h>

void	ft_alpha_mirror(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] += ('z' - 'a') - 2 * (s[i] - 'a');
		else if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += ('Z' - 'A') - 2 * (s[i] - 'A');
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_alpha_mirror(av[1]);
	write(1, "\n", 1);
	return (0);
}
