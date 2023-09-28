#include "main.h"

/**
 * get_bit - Find the value of a bit at a given index.
 * @n: Decimal number.
 * @index: Index (starting from 0) of the bit to retrieve.
 *
 * Return: Value of the bit at the specified index,
 * or -1 on error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	unsigned long int mask = 1UL << index;

	return ((n & mask) >> index);
}
