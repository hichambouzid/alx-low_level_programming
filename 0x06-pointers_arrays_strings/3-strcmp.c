/**
 * _strcmp - compare tow strings
 *
 * @s1: first input
 *
 * @s2: second input
 *
 * Return: always return a diferent
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
