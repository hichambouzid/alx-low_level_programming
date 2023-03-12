/**
 * _strpbrk - function return the fist similiraty betwin tow strings
 *
 * @s: string
 * @accept: string
 *
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (0);
}
