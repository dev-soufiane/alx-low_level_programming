#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the integer.
 * @n: An integer.
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i, index;
	int cp_array[n];

	for (i = 0; i < n; i++)
	{
		cp_array[i] = a[i];
	}
	index = 0;
	for (i = 0; i < n; i++)
	{
		a[i] = cp_array[n - index - 1];
		index++;
	}
}
