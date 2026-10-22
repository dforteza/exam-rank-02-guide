#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	hidenp(char *s1, char *s2)
{
	int	i, j, cont;

	i = 0;
	j = 0;
	cont = 0;
	while (s1[i])
	{
		while (s2[j])
		{
			if (s2[j] == s1[i])
			{
				cont++;
				if (cont != ft_strlen(s1))
					j++;
				break ;
			}
			j++;
		}
		i++;
	}
	if (cont == ft_strlen(s1))
		return (1);
	return (0);
}

int	main(int ac, char **av)
{
	char	c;

	if (ac == 3)
	{
		c = hidenp(av[1], av[2]) + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
	return (0);
}
