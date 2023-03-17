#include<stdlib.h>
/**
 * string_nconcat - alloc for concat tow strigns
 *
 * @s1: input
 * @s2: input
 * @n: input
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	i = 0;
	j = 0;
	if ((s1 == NULL && s2 == NULL) || (s1 == NULL && n == 0))
	{
		ptr = malloc(1);
		ptr[0] = '\0';
		return (ptr);
	}

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	if (s1 != NULL)
	{
		while (s1[i])
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j])
			j++;
	}
	if (j <= n)
		n = j;
	ptr = malloc(sizeof(char) * (i + n + 1));
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
