#include <unistd.h>

void	ft_rotone(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'y') || (s[i] >= 'A' && s[i] <= 'Y'))
			s[i] += 1;
		else if (s[i] == 'z' || s[i] == 'Z')
			s[i] -= 25;
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}
