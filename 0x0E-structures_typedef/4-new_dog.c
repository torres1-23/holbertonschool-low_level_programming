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

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[l])
		l++;
	while (owner[l1])
		l1++;
	nm = malloc(sizeof(char) * (l + 1));
	if (nm == NULL)
		free(nm);
		return (NULL);
	ow = malloc(sizeof(char) * (l1 + 1));
	if (ow == NULL)
		free(ow);
		return (NULL);
	for (i = 0; i <= l; i++)
		nm[i] = name[i];
	for (j = 0; j <= l1; j++)
		ow[j] = owner[j];
	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		free(nd);
		return (NULL);
	nd->name = nm;
	nd->age = age;
	nd->owner = ow;
	return (nd);
}
