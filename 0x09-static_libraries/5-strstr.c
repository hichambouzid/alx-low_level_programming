/**
 * _strstr - search a world in a text
 *
 * @haystack: first input
 * @needle: secon input
 *
 * Return: return a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int f;

	f = 0;
	i = 0;
	j = 0;
	while (needle[f])
		f++;
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] && needle[j])
		{
			j++;
		}
		if (j == f)
			return (haystack + i);
		i++;
	}
	return ('\0');
}
