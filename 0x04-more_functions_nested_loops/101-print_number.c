#include "main.h"
/**
 * print_number - function print numbers withe function _Putchar
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
	}
	if (n < 10)
		_putchar(n + 48);
	else if (n >= 10)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}
