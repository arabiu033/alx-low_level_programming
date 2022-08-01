#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = (dog_t *)malloc(sizeof(struct dog));
	char *n = malloc(sizeof(*name));
	char *o = malloc(sizeof(*owner));

	if (!ptr)
		return (NULL);
	n = name;
	o = owner;
	ptr->name = n;
	ptr->age = age;
	ptr->owner = o;

	return (ptr);
}
