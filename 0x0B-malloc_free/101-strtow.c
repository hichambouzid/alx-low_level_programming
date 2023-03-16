#include<stdlib.h>

/**
 * ft_check - function
 *
 * @str: string
 *
 * Return: number
 */
int ft_check(char *str)
{
	int j;
	int i;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != '\0' && str[i] != ' ')
			j = 1;
		i++;
	}
	return (j);
}
/**
 * strtow - function
 *
 * @str: string
 *
 * Return: double pointer
 */
char **strtow(char *str)
{
	int i, j, e, a, res;
	char **ptr;

	e = 0;
	j = 0;
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			j += 1;
		}
	}
	if (ft_check(str) == 0)
		return (NULL);
	ptr = malloc(sizeof(char *) * (j + 1));
	if ((!ptr) || (str == NULL) || (*str == '\0'))
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		if (str[i] != ' ')
		{
			while (str[i + j] != '\0' && str[i + j] != ' ')
				j++;
			ptr[e] = malloc(sizeof(char) * (j + 1));
			if (ptr[e] == NULL)
				return (NULL);
			res = i + j;
			a = 0;
			for (; i < res; i++)
				ptr[e][a++] = str[i];
			ptr[e][a] = '\0';
			e++;
		}
	}
	return (ptr);
}
