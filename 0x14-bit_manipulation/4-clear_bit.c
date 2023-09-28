#include "main.h"

/**
 * clear_bit - Clears the value of a bit at a given index to 0.
 * @n: Pointer to the decimal number.
 * @index: Index (starting from 0) of the bit to clear.
 *
 * Return: 1 if it succeed,
 * or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	*n = *n & ~(1UL << index);

	return (1);
}

