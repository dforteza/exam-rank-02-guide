#include <stdio.h>

char	*ft_strrev(char *s)
{
	int		i, len;
	char	t;

	// 1- RECORRER S
	len = 0;
	while (s[len])
		len++;

	// 2- REASIGNAR CONT T
	i = 0;
	while (i < len / 2)
	{
		t = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = t;
		
		i++;
	}
	return (s);
}

int	main(int ac, char **av)
{
	printf("STRREV - %s\n", ft_strrev(av[1]));
	return (0);
}