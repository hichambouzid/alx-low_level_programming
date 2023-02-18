#include<stdio.h>

/**
 * main - Entry Point
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int a, b;

	b = 0;
	while (b <= 98)
	{
		a = b + 1;
		while (a <= 99)
		{
			putchar(b / 10 + 48);
			putchar(b % 10 + 48);
			putchar(' ');
			putchar(a / 10 + 48);
			putchar(a % 10 + 48);
			if (a + b != 197)
			{
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		b++;
	}
	putchar('\n');
	return (0);
}
