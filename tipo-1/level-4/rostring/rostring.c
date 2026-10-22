#include <unistd.h>

void	rostring(char *s)
{
	int	i, start, end, flg1, flg2;

	i = 0;
	flg1 = 0;
	flg2 = 0;
	
	// 1- Saltar ESPS
	while (s[i] == ' ' || s[i] == '\t')
		i++;

	// 2- Delimitar
	start = i;
	while (s[i] && !(s[i] == ' ' || s[i] == '\t'))
		i++;
	end = i - 1;

	// 3- Saltar ESPS
	while (s[i] == ' ' || s[i] == '\t')
		i++;

	// 4- Epur
	while (s[i])
	{
		flg2 = 1;
		if (s[i] == ' ' || s[i] == '\t')
			flg1 = 1;
		else
		{
			if (flg1)
				write(1, " ", 1);
			flg1 = 0;
			write(1, &s[i], 1);
		}
		i++;
	}

	// 5- Imprimir 1ª palabra
	if (flg2 == 1)
		write(1, " ", 1);
	while (start <= end)
		write(1, &s[start++], 1);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		rostring(av[1]);
	write(1, "\n", 1);
	return (0);
}
