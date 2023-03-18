#include<stdlib.h>
/**
 * _realloc - function
 *
 * @old_size: input
 * @new_size: input
 * @ptr: input
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/*unsigned int i;*/

	if (new_size > old_size)
	{
		ptr = realloc(ptr, new_size);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
	{
		ptr = realloc(ptr, new_size);
		return (ptr);
	}

	return (ptr);
}
