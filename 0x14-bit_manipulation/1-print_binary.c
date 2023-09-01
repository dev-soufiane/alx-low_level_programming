#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert in binary
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;

	for (i = 1UL << 63; i > 0; i = i >> 1)
	{
		if (n & i)
			_putchar('1');
		else
			_putchar('0');
	}
}
