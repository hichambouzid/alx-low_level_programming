#include<stdlib.h>
/**
 * _abs - function that computes the absolute value of an int
 *
 * @n: integer
 *
 * Return: number
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
