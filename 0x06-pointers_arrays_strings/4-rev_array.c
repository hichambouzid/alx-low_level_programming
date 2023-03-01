
/**
 * reverse_array - reverse an array
 *
 * @a: array
 *
 * @n: size of array
 *
 * Return: void (nothing)
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	i = 0;
	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		i++;
		n--;
	}
}
