/**
 * cap_string - the first char is uppercase
 *
 * @str: input
 *
 * Return: output is a pointer
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	if (s[0] >= 'a' && s[0] <= 'z')
		s += -32;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i - 1] == 32 || s[i - 1] == 9 || s[i - 1] == 10 ||
					s[i - 1] == 44 || s[i - 1] == 59 || s[i - 1] == 46 ||
					s[i - 1] == 33 || s[i - 1] == 63 || s[i - 1] == 34 ||
					s[i - 1] == 40 || s[i - 1] == 41 || s[i - 1] == 123 ||
					s[i - 1] == 124)
			{
				s[i] += -32;
			}
		}
		i++;
	}
	return (s);
}
