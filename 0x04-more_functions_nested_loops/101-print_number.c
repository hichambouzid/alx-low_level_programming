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
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar(2 + 48);
		_putchar(1 + 48);
		_putchar(4 + 48);
		_putchar(7 + 48);
		_putchar(4 + 48);
		_putchar(8 + 48);
		_putchar(3 + 48);
		_putchar(6 + 48);
		_putchar(4 + 48);
		_putchar(8 + 48);
		return;
	}
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
