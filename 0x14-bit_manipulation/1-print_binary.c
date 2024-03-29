#include "main.h"

/**
 * print_binary - print_binary function print number in binary
 *
 * @n: number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar(48);
	else
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + 48);
	}
}

