#include "main.h"
/**
 * more_numbers - print 10 times number from 0 to 14;
 *
 *Return: void
 */
void more_numbers(void)
{
	int i;
	int e;

	i = 0;
	while (i < 10)
	{
		e = 0;
		while (e < 15)
		{
			if (e > 10)
				_putchar(e / 10 + 48);
			_putchar(e % 10 + 48);
			e++;
		}
		_putchar('\n');
		i++;
	}
}
