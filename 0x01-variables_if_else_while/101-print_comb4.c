#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *            combinations of two digits.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int j;
	int e;

	i = 0;
	while (i <= 7)
	{
		e = i + 1;
		while (e <= 8)
		{
			j = e + 1;
			while (j <= 9)
			{
				putchar(i + 48);
				putchar(e + 48);
				putchar(j + 48);
				if (e + j + i != 24)
				{
					putchar(',');
					putchar(' ');
				}
				j++;
			}
			e++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
