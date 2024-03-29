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
	int i, j;

	if (name == NULL || owner == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (name[i])
		i++;
	while (owner[j])
		j++;
	strang = malloc(sizeof(dog_t));
	if (strang == NULL)
		return (NULL);
	strang->name = malloc((sizeof(char) * (i + 1)));
	strang->owner = malloc(sizeof(char) * (j + 1));
	if ((strang->name == NULL) || (strang->owner == NULL))
	{
		free(strang->name);
		free(strang->owner);
		free(strang);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		strang->name[i] = name[i];
	strang->name[i] = '\0';
	for (j = 0; owner[j] != '\0'; j++)
		strang->owner[j] = owner[j];
	strang->owner[j] = '\0';
	strang->age = age;
	return (strang);
}
