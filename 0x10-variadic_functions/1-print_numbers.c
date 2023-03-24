#include<stdarg.h>
#include<stdio.h>
/**
 * print_numbers - function type variadic function use
 * them to print unidentified of numbers
 *
 * @separator: for separ bitwen numbers
 * @n: number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
