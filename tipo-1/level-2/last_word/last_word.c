#include <unistd.h>

void	ft_last_word(char *s)
{
	int	i, end;

	// 1- Recorrer str
	i = 0;
	while (s[i])
		i++;
	i--;

	// 2- Saltar ESP finales
	while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
		i--;
	
	// 3- Delimitar
	end = i;
	while (i >= 0 && !(s[i] == ' ' || s[i] == '\t'))
		i--;
	i++;

	// 4- Printear
	while (i <= end)
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_last_word(av[1]);
	write(1, "\n", 1);
	return (0);
}
