#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*arr;
	int	i, size, t;

	size = (end - start) > 0 ? (end - start) + 1 : (end - start) * (-1) + 1;
	
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (0);
	
	t = end;
	i = 0;
	while (i < size)
	{
		arr[i] = t;
		if (end > start)
			t--;
		else
			t++;
		i++;
	}
	return (arr);
}
