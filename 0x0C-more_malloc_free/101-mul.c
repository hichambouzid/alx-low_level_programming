#include<stdlib.h>
#include<stdio.h>
#include<limits.h>
/**
 * check - function
 *
 * @str: string
 *
 * Return: return 0 or 1
 */
int check(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] > '9' || str[i] < '0')
			return (1);
		i++;
	}
	return (0);
}
/**
 * main - second prototype of function main
 *
 * @argc: number of argruments
 *
 * @argv: input
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if ((check(argv[1]) == 1) || (check(argv[2]) == 1))
	{
		printf("Error\n");
		exit(98);
	}
	if ((atoi(argv[1]) > INT_MAX) || (atoi(argv[2]) < INT_MIN) ||
			(atoi(argv[1]) < INT_MIN) || (atoi(argv[2]) > INT_MAX))
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
		return (0);
	}
}
