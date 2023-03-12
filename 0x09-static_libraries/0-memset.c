/**
 * _memset - function initialize a memory
 *
 * @s: first input
 * @b: second input
 * @n: size
 *
 * Return: a pointer
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
