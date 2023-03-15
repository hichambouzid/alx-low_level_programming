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
	if (ptr == NULL)
		return (NULL);
	while (i < height)
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
