#include "main.h"

/**
 * get_endianness - check endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned long int n = 1;
	unsigned char *c = (unsigned char *)&n;

	if (*c == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
