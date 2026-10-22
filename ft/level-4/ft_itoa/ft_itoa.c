#include <stdlib.h>

int	nlen(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (n * (-1));
	return (n);
}

char	*ft_itoa(int nbr)
{
	char	*cnum;
	int		len, i;

	// 1- Len
	len = nlen(nbr);

	// 2- Signo
	i = 0;
	if (nbr < 0)
	{
		i++;
		len += 1;
	}

	// 3- Memoria
	cnum = (char *)malloc(sizeof(char) * (len + 1));
	if (!cnum)
		return (NULL);
	cnum[0] = '-';
	cnum[len] = '\0';

	// 4- Transformación
	while ((len - 1) >= i)
	{
		cnum[len - 1] = ft_abs(nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (cnum);
}
