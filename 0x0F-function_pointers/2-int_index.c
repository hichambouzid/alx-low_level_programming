#include<stddef.h>
/**
 * int_index - function return index
 *
 * @array: tableu of int
 * @size: size of array
 * @cmp: funtion pointer
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
