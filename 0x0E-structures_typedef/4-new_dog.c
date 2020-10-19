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
	unsigned int l = 0, l1 = 0, j, i;

	while (name[l])
		l++;
	while (owner[l1])
		l1++;
	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);
	nd->name = malloc(sizeof(char) * (l + 1));
	if (nd->name == NULL)
	{
		free(nd);
		return (NULL);
	}
	for (i = 0; i <= l; i++)
		nd->name[i] = name[i];
	nd->age = age;
	nd->owner = malloc(sizeof(char) * (l1 + 1));
	if (nd->owner == NULL)
	{
		free(nd->name);
		free(nd);
		return (NULL);
	}
	for (j = 0; j <= l1; j++)
		nd->owner[j] = owner[j];
	return (nd);
}
