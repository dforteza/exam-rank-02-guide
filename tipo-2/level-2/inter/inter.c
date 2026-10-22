#include <unistd.h>

int	check_double_pos(char c, char *s, int n)
{
	int	i;

	i = 0;
	while (i < n && s[i] != c)
		i++;
	return (i < n);
}

void	ft_inter(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j] && s2[j] != s1[i])
			j++;
		if (s2[j] && !check_double_pos(s1[i], s1, i))
			write(1, &s1[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
