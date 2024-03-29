#include<stddef.h>
/**
 * array_iterator - function an array with pointer to function
 *
 * @array: table of int
 * @size: size of array
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size > 0 && array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
