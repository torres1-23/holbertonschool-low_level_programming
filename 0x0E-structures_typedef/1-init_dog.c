#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: New dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner;
}
