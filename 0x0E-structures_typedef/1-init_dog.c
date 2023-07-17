#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes dog
 *
 * @d: address of struct
 * @name: name string of dog
 * @age: age of dog
 * @owner: name string of owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->age = age;
	d->name = name;
	d->owner = owner;
}
