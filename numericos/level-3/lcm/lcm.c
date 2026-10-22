int	hcf(int a, int b)
{
	int	t;

	while (b != 0)
	{
		t = b;
		b = a % b;
		a = t;
	}
	return (a);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	n;

	if (a == 0 || b == 0)
		return (0);
	n = hcf(a, b);
	return ((a / n) * b);
}
