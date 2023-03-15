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
			for (j = 0; j < i; j++)
				free(ptr[j]);

			free(ptr);
			return (NULL);
		}

	}


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}


	return (ptr);
}
