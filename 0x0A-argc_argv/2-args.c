#include "main.h"
/**
 * main - function
 *
 * @argc: size of array
 * @argv: array
 *
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			_putchar(argv[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
