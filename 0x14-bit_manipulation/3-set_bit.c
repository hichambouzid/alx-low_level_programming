#include "main.h"
/**
 * set_bit - set 1 in index
 *
 * @n: pointer to int
 * @index: input
 *
 * Return: 1 || -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long) * 8)
		return (-1);

	*n |= (1 << index);
	return (1);
}

