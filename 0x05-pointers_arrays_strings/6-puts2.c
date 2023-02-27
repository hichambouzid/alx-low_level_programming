#include "main.h"
/**
 * puts2 - print random char
 *
 * @str: input
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int j;

	j = 0;
	while (str[j])
		j++;
	i = 0;
	while (i < j)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
