#include<stdio.h>
/**
 * ft_factor_prime - print nothing
 *
 * @number: input
 *
 * Return: return is false
 */
int ft_factor_prime(long number)
{
	int i;
	int res;

	res = 0;
	i = 3;
	if (number % 2 == 0)
	{
		number = number / 2;
		ft_factor_prime(number);
	}
	else
	{
		while (i < number / i)
		{
			if (number % i == 0)
			{
				res = number / i;
				number = number / i;
				ft_factor_prime(number);
			}
			i += 2;
		}
		return (res);
	}
	return (number);
}
/**
 * main - function execute the false code hhhh
 *
 * Return: always return .
 */
int main(void)
{
	printf("%d\n", ft_factor_prime(1231952));
	return (0);
}
