#include "main.h"

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the integer
 * @n: Number of elements of the array to be printed
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (a[i] != a[n - 1])
			printf(", ");
	}
	printf("\n");
}
