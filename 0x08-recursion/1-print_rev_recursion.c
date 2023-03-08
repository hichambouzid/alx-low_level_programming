#include "main.h"
#include<string.h>
/**
 * _print_rev_recursion - print string revers
 *
 * @s: string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int i;
	int j;

	j = strlen(s);
	i = 0;
	j += -1;

	while (j - i >= 0)
	{
		_putchar(s[j - i]);
		i++;
	}
}
