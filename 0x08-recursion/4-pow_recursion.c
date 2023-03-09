/**
 * _pow_recursion - function count the power of number
 *
 * @x: number
 *
 * @y: power
 *
 * Return: i * power of number;
 */
int _pow_recursion(int x, int y)
{
	int i;

	i = 1;
	if (y < 0)
		return (-1);
	if (y >= 1)
	{
		i *= (x * _pow_recursion(x, y - 1));
	}
	return (i);
}
