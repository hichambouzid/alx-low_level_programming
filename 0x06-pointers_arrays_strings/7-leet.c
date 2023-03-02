/**
 * leet - function crypt the code in the 1337
 *
 * @s: string
 *
 * Return: alway return pointer
 */
char *leet(char *s)
{
	int i, j = 0;
	char lower_case[] = "AEOTL";
	char upper_case[] = "aeotl";
	char numbers[] = "43071";

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower_case[j] || s[i] == upper_case[j])
			{
				s[i] = numbers[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
