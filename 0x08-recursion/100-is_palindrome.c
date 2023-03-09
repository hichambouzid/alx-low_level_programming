/**
 * is_palindrome - check if the string palindrom
 *
 * @s: string
 *
 * Return: return 1 or 0
 */
int is_palindrome(char *s)
{
	int i;
	int j;
	int res;

	res = 0;
	i = 0;
	j = 0;
	while (s[i])
		i++;
	if (i % 2 != 0)
	{
		i--;
		while (i > j && s[i] == s[j])
		{
			i--;
			j++;
			if (j == i - 2)
				return (1);
		}
	}
	if (i % 2 == 0 && i > 4)
	{
		i--;
		while (i > j && s[i] == s[j])
		{
			i--;
			j++;
			if (j == i - 1)
				return (1);
		}
	}
	return (res);
}
