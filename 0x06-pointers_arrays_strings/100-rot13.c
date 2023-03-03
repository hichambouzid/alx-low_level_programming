/**
 * rot13 - crypt the string
 *
 * @s : string
 *
 * Return: pointer
 */
char *rot13(char *s)
{
	int i;
	int j;
	char chars[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";

	i = 0;
	while (s[i])
	{
		j = 0;
		while (((chars[j] != '\0') && (s[i] >= 'a' && s[i] <= 'z'))
				|| (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] == chars[j]) && (j < 26))
			{
				s[i] = chars[j + 26];
				break;
			}
			else if ((s[i] == chars[j]) && (j >= 26))
			{
				s[i] = chars[j - 26];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
