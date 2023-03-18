#include<stdlib.h>
#include<stdio.h>
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
	unsigned long mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if ((check(argv[1]) == 1))
	{
		printf("Error\n");
		exit(98);
	}
	if (check(argv[2]) == 1)
	{
		printf("Error\n");
		exit(98);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
