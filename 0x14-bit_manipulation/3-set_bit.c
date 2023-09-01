#include "main.h"

/**
 * set_bit - set bit value
 * @n: number pointer
 * @index: bit index (starting from 0)
 *
 * Return: 1 if successful, -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1UL << index;

	if (index >= sizeof(*n) * 8)
		return (-1);

	*n |= bit;

	return (1);
}
