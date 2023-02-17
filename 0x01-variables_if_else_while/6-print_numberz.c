#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0-9 using putchar
 *              while using int variable
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		putchar(i + 48);
		i++;
	}
	putchar('\n');
	return (0);
}
