#include "main.h"
/**
 * print_last_digit - print last number;
 *
 * @n: number give them in the input
 *
 * Return: Alwas return positive number
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar((n % 10) + 48);
		return (n % 10);
	}
	else if (n == -2147483648)
	{
		_putchar(8 + 48);
		return (8);
	}
	else
	{
		_putchar((n % 10) + 48);
		return (n % 10);
	}
}
