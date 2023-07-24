#include "main.h"

/**
 * swap_int - Swaps values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
