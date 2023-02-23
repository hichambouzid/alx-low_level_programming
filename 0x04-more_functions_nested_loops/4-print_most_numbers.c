#include "main.h"
/**
 * print_most_numbers - do not print 2 and 4.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if ((i == 50) || (i == 52))
			i++;
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
