/**
 * is_palindrome - check if the string palindrom
 *
 * @s: string
 *
 * Return: return 1 or 0
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
int is_palindrome(char *s)
{
	int i;
	int j;

	j = 0;
	i = strlen_recursion(s) - 1;
	if (*s == s[i])
	{

	}


}
