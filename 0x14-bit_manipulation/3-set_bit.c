#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: Pointer to the decimal number.
 * @index: Index (starting from 0) of the bit to set.
 *
 * Return: 1 if succeed,
 * or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | (1UL << index);

	return (1);
}
