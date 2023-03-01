/**
 * _strncat - it's like strcat but the defernt in n
 *
 * @dest: first input
 *
 * @src: second input
 *
 * @n: third input
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (i < n)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
