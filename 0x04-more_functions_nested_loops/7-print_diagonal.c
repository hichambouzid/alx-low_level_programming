#include "main.h"
/**
 * print_diagonal - print diagonal
 *
 * @n: input
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int e;

	i = 0;
	e = 0;
	if ((n < 0) || (n == 0))
	{
		_putchar('\n');
		return;
	}
	while (i < n)
	{
		_putchar('\\');
		_putchar('\n');
		for (e = 0; e <= i && i != n - 1; e++)
			_putchar(' ');
		if (i == n)
			break;
		i++;
	}
}
