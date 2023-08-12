#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create an array of integers within a given range
 * @min: The minimum value of the range (inclusive)
 * @max: The maximum value of the range (inclusive)
 *
 * Return: Pointer to the newly created array
 * If min > max or if malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *arrayPtr;
	int arr_size;
	int i;

	if (min > max)
		return (NULL);

	arr_size = max - min + 1;

	arrayPtr = malloc(sizeof(int) * arr_size);

	if (arrayPtr == NULL)
		return (NULL);

	for (i = 0; i < arr_size; i++)
	{
		arrayPtr[i] = min;
		min++;
	}

	return (arrayPtr);
}
