#include<stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (!i)
		exit(98);
	return (i);
}
