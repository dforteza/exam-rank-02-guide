#include <stddef.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i, j;
	int	flg;

	flg = 0; 
	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (reject[j] == s[i])
			{
				flg = 1;
				break ;
			}
			j++;
		}
		if (flg == 1)
			break ;
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("STRCSPN - %ld\n", ft_strcspn("PATATAS_CON_SALCHCIHAS", "CCON_")); // 7
	return (0);
}