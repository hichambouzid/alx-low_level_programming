/**
 * strlen_recursion - function count the lenght
 *
 * @s: input
 *
 * Return: int
 */

int strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		i = 1;
		i += strlen_recursion(s + 1);
	}
	return (i);
}
/**
 * check -  check if s palindrom
 *
 * @s: string
 *
 * @i: input
 *
 * @j: input
 *
 * Return: 1 or 0
 */
int check(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (check(s, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - check if the string palindrom
 *
 * @s: string
 *
 * Return: return 1 or 0
 */

int is_palindrome(char *s)
{
	return (check(s, 0, strlen_recursion(s) - 1));
}
