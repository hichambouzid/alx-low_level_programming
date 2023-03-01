/**
 * string_toupper - change all lowercase to uppercase
 *
 * @str: string of char
 *
 * Return: pointer
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += -32;
		i++;
	}
	return (str);
}
