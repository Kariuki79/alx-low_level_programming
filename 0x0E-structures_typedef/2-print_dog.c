#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - a funtion that prints a struct dog
 * @d: Pointer to the struct dog to print
 *
 * Description: if an element of d is NULL, prints(nil) instead.
 * if d is NULL, prints nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

