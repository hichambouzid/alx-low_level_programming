/**
 * _strcpy - function copy a string to an other array of chars
 *
 * @dest: input
 * @src: input
 *
 * Return: pointer dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
