#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert in binary
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int num_size = sizeof(unsigned long int) * 8;
	int i;

	num = 1;
	i = snum_ize - 1;

	while (i >= 0)
	{
		if ((n >> i) & num)
			break;
		i--;
	}

	while (i >= 0)
	{
		if ((n >> i) & num)
			_putchar('1');
		else
			_putchar('0');
		i--;
	}
}
