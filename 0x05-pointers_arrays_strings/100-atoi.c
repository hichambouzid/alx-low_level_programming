/**
 * _atoi - print convert a number
 *
 * @s: input
 *
 * Return: return number type int
 */
int _atoi(char *s)
{
	int i;
	int res;
	int sign;

	res = 0;
	i = 0;
	sign = 1;
	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (sign == 1)
		{
			res = res * 10;
			res = (res +  s[i]) - 48;
		}
		else if (sign == -1)
		{
			res = res * 10;
			res += -s[i] + 48;
		}
		i++;
	}
	return (res);
}
