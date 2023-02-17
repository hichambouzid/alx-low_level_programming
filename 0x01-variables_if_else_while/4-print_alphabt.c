#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters except q and e
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		if (i == 'e' || i == 'q')
			i++;
		putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
