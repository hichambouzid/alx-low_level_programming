#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - function
 *
 * @argc: input
 * @argv: input
 *
 * Return: always 0;
 */
int main(int argc, char **argv)
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
		return (0);
	}
	printf("Error\n");
	return (1);
}
