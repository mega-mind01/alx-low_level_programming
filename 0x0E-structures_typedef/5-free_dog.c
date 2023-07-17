#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - releases memory allocated to dog
 *
 * @d: pointer to memory address
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
