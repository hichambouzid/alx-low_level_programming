/**
 * _strspn - function
 *
 * @s: string
 * @accept: string
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int res;

	res = 0;
	i = 0;
	j = 0;
	while (accept[i])
	{
		for (j = 0; s[j]; j++)
		{
			if (accept[i] == s[j])
			{
				res += 1;
				break;
			}
		}
		i++;
	}
	j = 0;
	while (s[j])
		j++;
	if (accept[i] == s[j])
		res += 1;
	return (res);
}
