/**
 * _strlen - counte the number of char in string
 *
 * @s: input string
 *
 * Return: return int i number of chars.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
