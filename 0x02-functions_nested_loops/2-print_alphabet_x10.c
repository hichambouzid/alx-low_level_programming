#include "main.h"

/**
 * print_alphabet_x10 - print all alphabet 10 times in lowercase
 *
 * return: nothing
 */
void print_alphabet_x10(void)
{
	int i;
	int e;

	i = 0;
	while (i < 10)
	{
		e = 'a';
		while (e <= 'z')
		{
			_putchar(e);
			e++;
		}
		_putchar('\n');
		i++;
	}
}
