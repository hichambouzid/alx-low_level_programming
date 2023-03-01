
/**
 * _strcat - copy the second string in the first
 *
 * @dest: first input
 *
 * @src: second input
 *
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

