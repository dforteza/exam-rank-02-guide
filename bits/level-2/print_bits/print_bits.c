#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int		i;
	char	c;

	i = 8;
	while (i--)
	{
		c = (octet >> i & 1) + '0';
		write(1, &c, 1);
	}
}
