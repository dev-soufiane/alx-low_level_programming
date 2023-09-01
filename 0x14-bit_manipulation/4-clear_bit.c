#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: number pointer
 * @index: Index of the bit to be set to 0 (starting from 0)
 *
 * Return: 1 if the operation was successful, -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (n == NULL || index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bit = ~(1UL << index);
	*n &= bit;

	return (1);
}
