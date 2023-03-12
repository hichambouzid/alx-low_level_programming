/**
 * _strlen - count the lenght of string with recursion
 *
 * @s: string
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		i = 1;
		i += _strlen(s + 1);
	}
	return (i);
}
