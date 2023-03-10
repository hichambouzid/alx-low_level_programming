#include "main.h"
/**
 * main - second prototyp of function main
 *
 * @argc: size of argument passed in a program
 * @argv: an array containing the program command line
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	(void)argc;
	i = 0;
	while (argv[0][i])
		_putchar(argv[0][i++]);
	_putchar('\n');
	return (0);
}
