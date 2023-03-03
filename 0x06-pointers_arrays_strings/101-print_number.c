#include "main.h"
/**
 * print_number - print numbers
 *
 * @n: input
 *
 * Return: void
 */
void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
		print_number(n);
	}
	else if (n < 10)
		_putchar (n + 48);
	else if (n >= 10)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}
