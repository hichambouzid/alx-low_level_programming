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
	int lenght;

	lenght = 0;
	i = 0;
	j = 0;
	while (src[lenght])
		lenght++;
	while (dest[j])
		j++;
	if (lenght < n)
		n = lenght;
	while (i < n)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
