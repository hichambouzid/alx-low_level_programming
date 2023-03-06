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
	unsigned int i;
	int j;
	int f;

	i = 0;
	while (s[i])
	{
		j = 0;
		f = 1;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				f = 0;
				break;
			}
			j++;
		}
		if (f == 1)
			break;
		i++;
	}
	return (i);
}
