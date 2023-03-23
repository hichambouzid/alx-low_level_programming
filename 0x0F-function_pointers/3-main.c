#include "3-calc.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - function to start the code
 *
 * @argc: size of command line
 * @argv: array of command
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '/' && argv[2][0] != '+' && argv[2][0] != '-'
			&& argv[2][0] != '*' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') &&
		       (atoi(argv[1]) == 0 || atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	i = f(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", i);
	return (0);
}
