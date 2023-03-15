#include<stdlib.h>
/**
 * alloc_grid - creat an array in heap
 *
 * @width: input
 * @height: input
 *
 * Return: apointer to a pointer
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr;


	i = 0;
	j = 0;
	if ((width * height) <= 0)
		return (NULL);

	ptr = malloc(sizeof(int) * (height));
	while (i < height)
	{
		ptr[i] = malloc(sizeof(int) * (width));
		i++;
	}
	if (!ptr)
		return (NULL);
	i = 0;

	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr);
}
