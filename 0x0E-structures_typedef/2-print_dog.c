#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the structure of dog
 * @d: the dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\n", (d->name) ? d->name : "(nil)");
	if (!d->age)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
