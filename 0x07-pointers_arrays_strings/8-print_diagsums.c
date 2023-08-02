#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: Pointer to the start of the matrix.
 * @size: Size of the square matrix.
 *
 * Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
	int i, sum_diag1, sum_diag2;

	sum_diag1 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += a[i * size + i];
	}

	sum_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum_diag1, sum_diag2);
}
