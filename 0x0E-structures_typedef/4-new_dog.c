#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog.
 *
 * Return: new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);
	nd->name = name;
	nd->age = age;
	nd->owner = owner;
	return (nd);
}
