#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dogs
 * @d: dog to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (!d)
		return (NULL);
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
