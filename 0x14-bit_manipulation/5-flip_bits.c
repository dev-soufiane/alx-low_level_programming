#include "main.h"

/**
 * flip_bits - count bits to flip
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int total = 0;

	x = n ^ m;

	while (x)
	{
		if (x & 1ul)
			total++;
		x = x >> 1;
	}

	return (total);
}

