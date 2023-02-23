#include "main.h"
/**
 * _isdigit - function chek if the char is a digit
 *
 * @c: input
 *
 * Return: Alway return 0 or 1.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
