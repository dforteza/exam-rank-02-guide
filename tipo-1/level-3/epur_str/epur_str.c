#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	epur(char *s)
{
	int	i, flag;

	i = 0;
	flag = 0;
	while (is_space(s[i]))
		i++;
	while (s[i])
	{
		if (is_space(s[i]))
			flag = 1;
		else
		{
			if (flag)
				write(1, " ", 1);
			flag = 0;
			write(1, &s[i], 1);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		epur(av[1]);
	write(1, "\n", 1);
	return (0);
}
