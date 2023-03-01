/**
 * _strncpy - copy the string
 *
 * @dest: first input
 *
 * @src: second input
 *
 * @n: third input
 *
 * Return: Alway return pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int lenght;

	i = 0;
	lenght = 0;
	while (src[lenght])
		lenght++;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
