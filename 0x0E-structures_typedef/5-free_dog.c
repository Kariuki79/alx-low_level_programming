#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dog
 * @d: pointer to the dog_t struct to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
