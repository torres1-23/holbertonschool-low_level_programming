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
	char *nm, *ow;
	unsigned int l = 0, l1 = 0, j, i;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);
	while (name[l])
		l++;
	while (owner[l1])
		l1++;
	nm = malloc(sizeof(char) * (l + 1));
	if (nm == NULL)
		return (NULL);
	for (i = 0; nm[i]; i++)
		nm[i] = name[i];
	nm[i] = '\0';
	ow = malloc(sizeof(char) * (l1 + 1));
	if (ow == NULL)
		return (NULL);
	for (j = 0; ow[j]; j++)
		ow[j] = owner[j];
	ow[j] = '\0';
	nd->name = nm;
	if (nd->name == NULL)
	{
		free(nd);
		return (0);
	}
	nd->age = age;
	nd->owner = ow;
	if (nd->owner == NULL)
	{
		free(nd);
		free(nd->name);
		return (0);
	}
	return (nd);
}
