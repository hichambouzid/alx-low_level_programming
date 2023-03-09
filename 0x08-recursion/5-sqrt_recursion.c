
int _sqrt_recursion(int n)
{
	int i;

	i = 2;
	if (n < 0)
		return (-1);
	if (n == 4)
		return (i);
	else
	{
		i *= (n * _sqrt_recursion(n / 2));
	}
	return (-1);
}
