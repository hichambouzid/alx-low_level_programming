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

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		dest[i] = '\0';
		return (dest);
	}
	return (dest);
}
