#include "dog.h"
#include<stdlib.h>
/**
 * new_dog - dog_t is a typedef of struct named dog
 *
 * @name: input
 * @age: input
 * @owner: input
 *
 * Return: return typedef
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *strang;

	strang = malloc(sizeof(dog_t));
	strang->name = name;
	strang->age = age;
	strang->owner = owner;

	return (strang);
}
