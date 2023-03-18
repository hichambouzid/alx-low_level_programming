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
int check_long(char *str)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			j += 1;
			if (j > 9)
				return (1);
		}
		else
			j = 0;
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
	if ((check_long(argv[1]) == 1) || (check_long(argv[2]) == 1))
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
