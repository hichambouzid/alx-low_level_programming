#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return : void alwas nothing
 */
void times_table(void)
{
	int i;
	int e;
	int j;

	i = 0;
	while (i <= 9)
	{
		e = 0;
		j = 0;
		_putchar(48);
		while (e < 9)
		{
			j += i;
			if (j < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(j + 48);
			}
			else if (j >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(j / 10 + 48);
				_putchar(j % 10 + 48);
			}
			e++;
		}
		_putchar('\n');
		i++;
	}
}
