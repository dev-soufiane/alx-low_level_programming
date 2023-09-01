#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;

	if (b == NULL)
		return (0);

	uint = 0;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		uint = (uint << 1) | (*b++ - '0');
	}

	return (uint);
}
