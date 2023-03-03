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

	char ca[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char chare[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	i = 0;

	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == ca[j])
			{
				s[i] = chare[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
