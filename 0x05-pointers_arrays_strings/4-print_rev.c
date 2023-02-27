#include "main.h"
/**
 * print_rev - print the string in revers
 *
 * @s: input string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	i--;
	while (i >= 0)
		_putchar(s[i--]);
	_putchar('\n');
}
