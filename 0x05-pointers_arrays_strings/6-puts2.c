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

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
