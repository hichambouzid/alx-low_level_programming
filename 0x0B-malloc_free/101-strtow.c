#include<stdlib.h>

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
		if (str[i] != ' ' && str[i] != '\0')
		{
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			j += 1;
		}
	}
	ptr = malloc(sizeof(char *) * (i));
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
