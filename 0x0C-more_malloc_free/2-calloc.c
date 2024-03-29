#include<stdlib.h>
/**
 * _calloc - function alloc and initialize
 *
 * @nmemb: size od array
 *
 * @size: type of array
 *
 * Return: poinetr type void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = calloc(nmemb, size);
	if (!i)
		exit(98);
	return (i);
}
