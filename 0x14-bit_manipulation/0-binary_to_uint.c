#include "main.h"
#include<stdlib.h>
/**
 * power - function count the power of number with recuursion
 *
 * @num: number
 * @pow: power
 *
 * Return: result
 */
unsigned int power(int num, unsigned int  pow)
{
	if (pow == 0)
		return (1);
	else
		return (num * power(num, --pow));
}
/**
 * binary_to_uint - function convert binary to decimal
 *
 * @b: string
 *
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int num;
	unsigned int j;

	num = 0;
	i = 0;
	if (!b)
		return (num);
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	i--;
	for (j = 0; b[j]; j++)
	{
		num += ((b[j] - 48) * power(2, i));
		i--;
	}
	return (num);
}
