#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * ft_is_number - chech if the char is numbers
 *
 * @str: string
 *
 * Return: number or 0 or error
 */

int ft_is_number(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] > '9' || str[i] < '0')
			return (0);
		i++;
	}
	return (1);
}

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
			if (ft_is_number(argv[j]) == 0)
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
