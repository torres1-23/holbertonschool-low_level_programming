#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: New dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog.
 *
 * Return: 0 in success, 1 if fails.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (1);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (0);
}
