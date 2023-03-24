#include<stdarg.h>
/**
 * sum_them_all - function add all the argument give them the user
 * and we use here variadic function
 *
 * @n: number of argument
 *
 * Return: the sum of all ints
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptrcount;
	unsigned int i;
	int res;

	res = 0;
	va_start(ptrcount, n);
	for (i = 0; i < n; i++)
		res += va_arg(ptrcount, int);
	va_end(ptrcount);
	return (res);
}
