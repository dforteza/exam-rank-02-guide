#include <unistd.h>

void	rstr_cap(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += ('a' - 'A');
		if (s[i + 1] == ' ' || s[i + 1] == '\t' || s[i + 1] == '\0')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= ('a' - 'A');
		}
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 1)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (av[i])
		{
			rstr_cap(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
