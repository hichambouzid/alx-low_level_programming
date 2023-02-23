#include<unistd.h>
/**
 * _putchar - print charcters
 *
 * @c: input
 *
 * Return: return 1 or 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main - execute the code
 *
 * Return: Alwas return 0.
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "FizzBuzz", 8);
		else if (i % 3 == 0)
			write(1, "Fizz", 4);
		else if (i % 5 == 0)
			write(1, "Buzz", 4);
		else
		{
			if (i >= 10)
				_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
		}
		if (i != 100)
			_putchar(' ');
		i++;
	}
	_putchar('\n');
	return (0);
}
