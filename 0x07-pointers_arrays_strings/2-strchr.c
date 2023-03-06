/**
 * _strchr - function
 *
 * @s: string
 * @c: character
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i;
	char ce;

	ce = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	s = &ce;
	return (s);
}
