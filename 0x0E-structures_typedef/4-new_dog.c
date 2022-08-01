#include "dog.h"
#include <stdlib.h>

int len(char *);
void copy(char *, char *);

/**
 * new_dog - create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || age < 0 || !owner)
		return (NULL);
	d = malloc(sizeof(struct dog));

	d->name = malloc(sizeof(char) * len(name));
	if (!d->name)
		return (NULL);
	d->age = age;
	d->owner = malloc(sizeof(char) * len(owner));

	copy(d->name, name);
	copy(d->owner, owner);

	return (d);
}

/**
 * len - count the string length
 * @str: string
 * Return: int length
 */
int len(char *str)
{
	int i = 0;

	while (str[i])
		++i;
	return (++i);
}

/**
 * copy - copy the string from one var to another
 * @s1: - first string
 * @s2: - second string
 * Return: void nothing
 */
void copy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
}
