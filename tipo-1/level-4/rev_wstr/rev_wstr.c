#include <unistd.h>

void	rev(char *s)
{
	int	i, start, end, flag;

	// 1- Recorrer s
	i = 0;
	while (s[i])
		i++;
	i--;

	// 2- Recorrer s hacia atrás
	while (i >= 0)
	{
		// 2.1- Saltar ESPS
		while (s[i] == ' ' || s[i] == '\t')
			i--;

		// 2.2- Delimitar
		end = i;
		while (i >= 0 && !(s[i] == ' ' || s[i] == '\t'))
			i--;
		start = i + 1;
		flag = start;

		// 2.3- Imprimir
		while (start <= end)
		{
			write(1, &s[start], 1);
			start++;
		}

		// 2.4- ESP entre palabras
		if (flag != 0)
			write(1, " ", 1);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev(av[1]);
	write(1, "\n", 1);
	return (0);
}
