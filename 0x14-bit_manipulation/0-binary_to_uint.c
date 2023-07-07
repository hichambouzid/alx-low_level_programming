#include<stdlib.h>
#include "main.h"

/**
 * ft_index - function return the index of char in buff
 *
 * @str: string 0 1
 * @c: char
 *
 * Return: inndex
 */
unsigned int ft_index(char *str, char c)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == c)
			return (i);
	}
	return (3);
}

/**
 * ft_power - count the power of number
 *
 * @number: number
 * @power: power
 *
 * Return: total
 */

int ft_power(int number, int power)
{
	if (number == 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (number * ft_power(number, power - 1));
}

/**
 * binary_to_uint - function
 *
 * @b: number in binary
 *
 * Return: return the number in decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j;
	unsigned int len;

	j = 0;
	if (!b)
		return (0);
	for (len = 0; b[len]; len++)
	;
	len -= 1;
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		j += ft_power(2, len) * ft_index("01", b[i]);
		len--;
	}
	return (j);
}

