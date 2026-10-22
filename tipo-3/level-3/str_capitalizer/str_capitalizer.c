#include <unistd.h>

void	str_cap(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		// 1- Si MAYUSC -> MINUSC
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += ('a' - 'A');

		// 2- Si i = 0 || (i - 1) ESP
		// 		2.1- Si [a, z] -> MAYUSC
		if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t')
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
			str_cap(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
