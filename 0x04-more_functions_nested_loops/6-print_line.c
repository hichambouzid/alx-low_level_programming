#include "main.h"
/**
 * print_line - draw a straight
 *
 * @n: the input
 *
 * Return: alwas void
 */
void print_line(int n)
{
	int i;

	i = 0;
	if ((n == 0) || (n < 0))
	{
		_putchar('\n');
		return;
	}
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
