/**
 * _strchr - search for char in string from index 0 to '\0'
 *
 * @s: string
 *
 * @c: char
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
