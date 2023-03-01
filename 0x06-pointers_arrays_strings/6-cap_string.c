/**
 * cap_string - the first char is uppercase
 *
 * @str: input
 *
 * Return: output is a pointer
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str += -32;
	while (str[i])
	{
		if ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n'))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] += -32;
		}
		i++;
	}
	return (str);
}
