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

	i = calloc(nmemb, sizeof(size));
	if (i == NULL)
		exit(98);
	return (i);
}
