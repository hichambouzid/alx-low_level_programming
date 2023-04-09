#include "main.h"
/**
 * get_bit - function the value of bit
 *
 * @n: number
 * @index: input
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (i < index && n <= 0)
			return (-1);
		n >>= 1;
	}
	return ((n & 1));
}
