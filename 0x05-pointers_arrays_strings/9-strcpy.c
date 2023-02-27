/**
 * *_strcpy - copy a string
 *
 * @dest: first input
 *
 * @src: second input
 *
 * Return: return pointer dest.
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
