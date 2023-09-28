#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to be printed in binary.
 *
 * Return: Void.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int start_printing = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask)
	{
		if (n & mask)
		{
			start_printing = 1;
			_putchar('1');
		}
		else if (start_printing)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
