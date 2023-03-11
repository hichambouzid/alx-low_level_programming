#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - function
 *
 * @argc: input
 * @argv: input
 *
 * Return: number or 0 or error
 */
int main(int argc, char **argv)
{
	int i;
	int j;

	j = 1;
	i = 0;
	if (argc >= 3)
	{
		while (j < argc)
		{
			if (atoi(argv[j]) == 0)
			{
				printf("Error\n");
				return (0);
			}
			i += atoi(argv[j]);
			j++;
		}
		printf("%d\n", i);
		return (0);
	}
	printf("0\n");
	return (0);
}
