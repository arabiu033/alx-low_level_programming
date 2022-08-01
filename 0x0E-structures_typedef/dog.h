#ifndef TASK0
#define TASK0

/**
 * struct dog - a dog profile
 * @name: the dog name
 * @age: the dog age
 * @owner: name of the dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
