#include "main.h"
/**
 * jack_bauer - function print every minute in the day
 *
 * Return: Always void
 */
void jack_bauer(void)
{
	int i;
	int e;

	i = 0;
	while (i <= 23)
	{
		e = 0;
		while (e <= 59)
		{
			_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
			_putchar(':');
			_putchar(e / 10 + 48);
			_putchar(e % 10 + 48);
			_putchar('\n');
			e++;
		}
		i++;
	}
}
