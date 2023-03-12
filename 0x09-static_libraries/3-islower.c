/**
 * _islower - function check if the char is lowercase
 *
 * @c: input char
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
