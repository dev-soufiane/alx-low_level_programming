#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Function that prints a struct dog
 * @d: Pointer to the struct dog
 *
 * This function prints the details of a struct dog,
 *	including its name, age, and owner.
 * If any element of the struct dog is NULL,
 *	it prints "(nil)" instead of the NULL value.
 * If the pointer @d is NULL, nothing is printed.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
