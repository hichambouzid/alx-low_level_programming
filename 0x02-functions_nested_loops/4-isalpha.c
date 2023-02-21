#include "main.h"

/**
 * _isalpha - function check if the charctere i is alphabet
 i*
 * @c: check input of function
 *
 * Return: if `c` is alphabet return 1
 *         else return 0.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
