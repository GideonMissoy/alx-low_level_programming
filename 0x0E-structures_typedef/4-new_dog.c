#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog'd age
 * @owner: dog's owner
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int p, q, y;
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (p = 0; name[p]; p++)
		;
	p++;
	d->name = malloc(p * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (y = 0; y < p; y++)
		d->name[y] = name[y];

	d->age = age;
	for (q = 0; owner[q]; q++)
		;
	q++;
	d->owner = malloc(q * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (y = 0; y < q; y++)
		d->owner[y] = owner[y];
	return (d);
}
