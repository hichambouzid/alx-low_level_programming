#include "main.h"

/**
 * main - Print _putchar
 * Return: Always 0
 */
int main(void)
{
	int i;
	char c[] = "_putchar";

	i = 0;
	while (c[i])
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
}
