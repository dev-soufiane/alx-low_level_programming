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
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
