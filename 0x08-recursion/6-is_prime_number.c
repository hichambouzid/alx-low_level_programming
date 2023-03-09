/**
 * is_prime_number - check if the number is prime
 *
 * @n: input
 *
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n < 0)
		n *= -1;
	if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0) || (n == 1))
		return (0);
	return (1);
}
