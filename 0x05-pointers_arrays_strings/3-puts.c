#include "main.h"
/**
 * _puts - print the string
 *
 * @str: input
 *
 * Return: Always void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
