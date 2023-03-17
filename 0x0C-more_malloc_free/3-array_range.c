#include<stdlib.h>
/**
 * array_range - function creat an array size from min to max
 *
 * @min: input
 * @max: input
 *
 * Return: array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	i = 0;
	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * ((max + 1) - min));
	if (!ptr)
		return (NULL);
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
