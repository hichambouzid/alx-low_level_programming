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

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (s + i);
}
