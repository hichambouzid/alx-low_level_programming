#include<stdlib.h>
/**
 * free_grid - free memory allocation
 *
 * @grid: double pointer
 *
 * @height: input
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	(void)height;
	free(grid);
}
