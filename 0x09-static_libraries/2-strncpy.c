/**
 * _strncpy - function initialize
 *
 * @dest: input
 * @src: input
 *
 * @n: size
 *
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		dest[i] = '\0';
		i++;
		if (i < n)
		{
			while (i < n)
			{
				dest[i] = 0;
				i++;
			}
		}
		return (dest);
	}
	return (dest);
}
