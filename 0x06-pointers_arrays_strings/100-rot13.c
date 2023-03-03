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

	i = 0;
	char chars[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char chare[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == chars[j])
			{
				s[i] = chare[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
