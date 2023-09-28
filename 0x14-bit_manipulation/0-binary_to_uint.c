#include "main.h"

/**
 * binary_to_uint - Convert binary string to unsigned int.
 * @b: Binary string (0 and 1).
 * Return: Converted unsigned int,
 * or 0 on error.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = (num << 1) | (*b - '0');
		b++;
	}

	return (num);
}
