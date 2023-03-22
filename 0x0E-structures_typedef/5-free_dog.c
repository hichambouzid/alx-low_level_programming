#include "dog.h"
#include<stdlib.h>
/**
 * free_dog - function free the memory alloction
 *
 * @d: typedef point to a struct dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
