#include<unistd.h>
/**
 * _putchar - print only the chars
 *
 * @c: input
 *
 * Return: char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
