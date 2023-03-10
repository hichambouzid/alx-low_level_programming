#include "main.h"
/**
 * check - check if the number sqr
 *
 * @a : input
 *
 * @b: input
 *
 * Return: natural a or squar or -1
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - function
 *
 * @n: number
 *
 * Return: number
 */
int _sqrt_recursion(int n)
{
	return (check(1, n));
}
