/**
 * _strncat - it's loks like strcat the diferent in n
 *
 * @dest: second input
 * @src: first input
 * @n: size
 *
 * Return: pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int lenght;

	i = 0;
	j = 0;
	lenght = 0;
	while (src[lenght])
		lenght++;
	while (dest[j])
		j++;
	if (n > lenght)
		n = lenght;
	while (i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
