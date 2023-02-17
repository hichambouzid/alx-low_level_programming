#include<stdio.h>

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
