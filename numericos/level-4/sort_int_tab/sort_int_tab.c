void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i, j;
	int				t;

	if (size < 2)
		return ;
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				t = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = t;
			}
			j++;
		}
		i++;
	}
}
