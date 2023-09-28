#include "main.h"

/**
 * flip_bits - Calculate the number of bits to flip between two numbers.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result)
	{
		cnt += xor_result & 1;
		xor_result >>= 1;
	}

	return (cnt);
}
