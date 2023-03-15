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

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int) * (height));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * (width));
		if (ptr[i] == NULL)
		{
			i--;
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);
			return (NULL);
		}
	}
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
