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
	if (d == NULL)
	{
		return;
	}

	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age == 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
