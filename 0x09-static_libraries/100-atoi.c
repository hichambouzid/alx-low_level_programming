/**
 * _atoi - function convert a string to digit
 *
 * @s: string
 *
 * Return: a number
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;
	if (s[0] == '\0')
		return (res);
	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] == '\0')
			return (0);
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (sign == 1)
		{
			res *= 10;
			res += s[i] - 48;
		}
		if (sign == -1)
		{
			res *= 10;
			res += -s[i] + 48;
		}
		i++;
	}
	return (res);
}
