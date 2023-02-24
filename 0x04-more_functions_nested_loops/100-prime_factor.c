#include<stdio.h>


int ft_is_factor(long num)
{
	int i;
	int res;
	int j;

	i = 2;
	res = 0;
	while (i <= num / 2 )
	{
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
		{
			res = i;
		}
		i++;
	}
	return (res);

}
int main()
{
	printf("%d\n",ft_is_factor(1231952));

	return (0);
}
