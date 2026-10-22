#include <unistd.h>

void	ft_snake_to_camel(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '_')
		{
			i++;
			s[i] -= ('a' - 'A');
		}
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_snake_to_camel(av[1]);
	write(1, "\n", 1);
	return (0);
}
