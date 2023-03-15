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

	if ((width * height) <= 0)
		return (NULL);

	ptr = malloc(sizeof(int) * (height));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * (width));
		if (ptr[i] == NULL)
		{
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < height; i++)
	{
		j = 0;
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
	}
	return (ptr);
}
