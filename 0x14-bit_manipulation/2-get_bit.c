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
	if (index > sizeof(unsigned long) * 8)
		return (-1);
	else
		return ((n >> index) & 1);
}
