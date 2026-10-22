#include <unistd.h>

void	ft_repeat_alpha(char *s)
{
	int	i;
	int	n;

	i = 0;
	while (s[i])
	{
		n = 1;
		if (s[i] >= 'a' && s[i] <= 'z')
			n = s[i] - 'a' + 1;
		else if (s[i] >= 'A' && s[i] <= 'Z')
			n = s[i] - 'A' + 1;
		while (n--)
			write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_repeat_alpha(av[1]);
	write(1, "\n", 1);
	return (0);
}
