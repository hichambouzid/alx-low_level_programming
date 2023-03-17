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
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[i])
		j++;
	if (j <= n)
		n = j;
	ptr = malloc(sizeof(char) * (i + n + 1));
	if (!ptr)
		return (NULL);
	j = 0;
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
