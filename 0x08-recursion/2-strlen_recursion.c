/**
 * _strlen_recursion - is hard but i understand them
 *
 * @s: string
 *
 * Return: lenght
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		i = 1;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
