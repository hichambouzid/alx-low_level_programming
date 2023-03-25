#include<stdarg.h>
#include<stdio.h>
/**
 * print_strings - print a strings passed as parametre
 *
 * @separator: input
 * @n: number of agrument
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{

		str = va_arg(ptr, char *);
		if (str)
			printf("%s", str);
		if (str == NULL)
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
