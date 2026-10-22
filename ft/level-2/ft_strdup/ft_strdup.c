#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i = 0;

	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	char *d;
	int	i, len;

	len = ft_strlen(s);

	d = (char *)malloc(sizeof(char) * (len + 1));
	if (!d)
		return (NULL);
	
	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
