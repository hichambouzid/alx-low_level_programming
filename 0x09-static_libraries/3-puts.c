#include "main.h"
/**
 * _puts - funtion write i string follow by a new line
 *
 * @str: string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
