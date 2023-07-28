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
	int i, temp, lastIndex;

	lastIndex = n - 1;
	for (i = 0; i < lastIndex; i++)
	{
		temp = a[i];
		a[i] = a[lastIndex];
		a[lastIndex] = temp;
		lastIndex--;
	}
}
