#include <unistd.h>

void	ft_camel_to_snake(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			write(1, "_", 1);
			s[i] += ('a' - 'A');
		}
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_camel_to_snake(av[1]);
	write(1, "\n", 1);
	return (0);
}
