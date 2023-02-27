/**
 * rev_string - revers string
 *
 * @s: input
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;
	char tmp;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	i--;
	while (i >= j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i--;
		j++;
	}
}
