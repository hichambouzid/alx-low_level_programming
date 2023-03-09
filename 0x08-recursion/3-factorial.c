/**
 * factorial - function count the factorial of number
 *
 * @n: input
 *
 * Return: output
 */
int factorial(int n)
{
	int i;

	i = 1;
	if (n < 0)
		return (-1);
	if (n > 1)
	{
		i *= (n * factorial(n - 1));
	}
	return (i);
}
