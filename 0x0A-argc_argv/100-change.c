#include<stdlib.h>
#include<stdio.h>

/**
 * change - function for make change of amounte of money
 *
 * @i: money
 *
 * Return: change
 */
int change(int i)
{
	int e;

	e = 0;
	while (i > 0)
	{
		if (i % 25 == 0)
		{
			e += 1;
			i -= 25;
		}
		else if (i % 10 == 0)
		{
			e += 1;
			i -= 25;
		}
		else if (i % 5 == 0)
		{
			e += 1;
			i -= 5;
		}
		else if (i % 2 == 0)
		{
			e += 1;
			i -= 2;
		}
		else if (i % 1 == 0)
		{
			e += 1;
			i -= 1;
		}
		i -= 0;
	}
	return (e);
}
/**
 * main - second prototyp of main
 *
 * @argc: size
 * @argv: array
 *
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = atoi(argv[1]);
		if (i < 0)
		{
			printf("0\n");
			return (0);
		}
		printf("%d\n", change(i));
		return (0);
	}
	printf("Error\n");
	return (1);

}
