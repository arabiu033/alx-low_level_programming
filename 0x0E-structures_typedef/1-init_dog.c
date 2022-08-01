#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: dog to initialize
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return: void nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
