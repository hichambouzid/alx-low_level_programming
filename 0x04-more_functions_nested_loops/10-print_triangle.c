#include "main.h"
/**
 * print_triangle - print traigle
 *
 * @size: input
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	i = 1;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i <= size)
	{
		j = 0;
		while (j < size)
		{
			if (size - i > j)
				_putchar(' ');
			else
				_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
