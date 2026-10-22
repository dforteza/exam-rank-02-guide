#include <stddef.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i, j;
	int	flg;

	i = 0;
	while (s[i])
	{
		flg = 0;
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				flg = 1;
				break ;
			}
			j++;
		}
		if (flg == 0)
			break ;
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("STRSPN - %ld\n", ft_strspn("PATATAS_CON_SALCHCIHAS", "PTAS")); // 7
	return (0);
}
