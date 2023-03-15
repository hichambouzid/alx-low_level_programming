#include<stdlib.h>
/**
 * argstostr - function concatenaties all the argumments
 *
 * @ac: size
 * @av: array
 *
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int res;
	char *ptr;
	int e;

	res = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			res += 1;

	ptr = malloc(sizeof(int *) * (res + i + 1));
	ptr[0] = '\0';

	for (i = 1; i < ac; i++)
	{
		e = 0;
		while (ptr[e])
			e++;
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[e] = av[i][j];
			e++;
		}
		ptr[e] = '\n';
		ptr[e + 1] = '\0';
	}
	return (ptr);
}