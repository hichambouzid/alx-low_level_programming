#include "main.h"
/**
 * puts_half - print half of string
 *
 * @str: input
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else if (i % 2 != 0)
		j = (i - 1) / 2;
	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
