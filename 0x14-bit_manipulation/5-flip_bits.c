#include "main.h"
/**
 * flip_bits - function count how many bits defirent bitwene
 * to numbers
 *
 * @n: input
 * @m: input
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int count;

	count = 0;
	for (i = 0; i < sizeof(unsigned long) * 8; i++)
	{
		if ((n ^ m) & 1)
			count++;
		n >>= 1;
		m >>= 1;
	}
	return (count);
}

