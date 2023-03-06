/**
 * _memset - function initialize the memory
 *
 * @s: string
 * @b: second input
 * @n: third input
 *
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
