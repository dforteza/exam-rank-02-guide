#include <unistd.h>

void	ft_ulstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 'a' - 'A';
		else if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 'a' - 'A';
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_ulstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
