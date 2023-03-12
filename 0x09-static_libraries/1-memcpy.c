/**
 * _memcpy - function loks like strcpy but here don't add '\0' in dest
 *
 * @dest: input
 * @src: input
 * @n: size
 *
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
